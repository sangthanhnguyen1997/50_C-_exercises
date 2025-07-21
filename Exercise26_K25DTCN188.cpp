/*
Nguyen Thanh Sang - PTIT - K25DTCN188
Exercise 26: Bien doi day so - page 27
- mang doi xung thi cac phan tu 2 dau mang luon bang nhau.
-> dùng list - danh sách liên kết đôi vì phải xóa sửa phần tử.
- vẫn có thể tối ưu được code này.
*/
#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <iterator>
using namespace std;
int main()
{
    int test;
    cin >> test;
    vector<int> answer;
    answer.reserve(test);
    while (test--)
    {
        list<int> ls;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            ls.push_back(x);
        }
        int cnt = 0;
        auto it1 = ls.begin();
        auto it2 = ls.end();
        it2--;
        while (distance(it1, it2) > 0)
        {
            if (*it1 == *it2)
            {
                it1++;
                if (it1 == it2)
                    break;
                it2--;
            }
            else if (*it1 < *it2)
            {
                cnt++;
                *it1 += *(next(it1));
                ls.erase(next(it1));
                it1 = ls.begin(); // gán lại, duyệt từ đầu cho an toàn logic
                it2 = --ls.end();
            }
            else if (*it1 > *it2)
            {
                cnt++;
                *it2 += *(prev(it2));
                ls.erase(prev(it2));
                it1 = ls.begin();
                it2 = --ls.end();
            }
        }
        answer.push_back(cnt);
    }
    for (int x : answer)
        cout << x << endl;
    return 0;
}