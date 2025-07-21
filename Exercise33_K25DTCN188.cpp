/*
Nguyen Thanh Sang - PTIT - K25DTCN188
Exercise 33: sắp xếp xen kẽ - page 34;
bài này áp dụng 2 con trỏ.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int test;
    cin >> test;
    vector<vector<int>> answer;
    while (test--)
    {
        int n;
        cin >> n;
        vector<int> v;
        v.reserve(n);
        vector<int> v1;
        v1.reserve(n);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        int it = 0;
        int it1 = n - 1;
        while (it1 >= it)
        {
            if (it == it1)
            {
                v1.push_back(v[it]);
                break;
            }
            v1.push_back(v[it1]);
            v1.push_back(v[it]);
            it1--;
            it++;
        }
        answer.push_back(v1);
    }
    for (auto x : answer)
    {
        for (auto y : x)
        {
            cout << y << ' ';
        }
        cout << endl;
    }
    return 0;
}