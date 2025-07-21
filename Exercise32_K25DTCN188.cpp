/*
Nguyen Thanh Sang - PTIT - K25DTCN188
Exercise 32: hop va giao 2 day so 2 - page 33;
do bài 31 dùng cấu trúc dữ liệu map nên bài 31,32 đều áp dụng chung một mẫu code.
*/
#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main()
{
    int test;
    cin >> test;
    vector<vector<int>> answer;
    while (test--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a;
        a.reserve(n);
        vector<int> b;
        b.reserve(m);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
            mp[x]++;
        }
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            b.push_back(x);
            mp[x]++;
        }
        vector<int> answer1;
        vector<int> answer2;
        for (auto x : mp)
        {
            answer1.push_back(x.first);
            if (x.second > 1)
                answer2.push_back(x.first);
        }
        answer.push_back(answer1);
        answer.push_back(answer2);
    }
    for (auto x : answer)
    {
        for (int y : x)
            cout << y << ' ';
        cout << endl;
    }
    return 0;
}