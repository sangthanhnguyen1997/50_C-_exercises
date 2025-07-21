/*
Nguyen Thanh Sang - PTIT - K25DTCN188
Exercise 28: doi cho chu so - page 29;

*/
#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <cctype>
#include <algorithm>
using namespace std;
void swap(int &x, int &y)
{
    int t = x;
    x = y;
    y = t;
}
int main()
{
    int test;
    cin >> test;
    vector<vector<int>> answer;
    cin.ignore();
    answer.reserve(test);
    while (test--)
    {
        string in;
        getline(cin, in);
        vector<int> v;
        v.reserve(in.length());
        vector<int> final;
        for (int i = 0; i < in.length(); i++)
        {
            int x = in[i] - '0';
            v.push_back(x);
        }
        int t = v.size();
        t--;
        int t2 = t;
        // tim chi so t dau tien ma v[t-1]>v[t]; neu khong ton tai thi d.an = -1
        while (t >= 1 && v[t - 1] <= v[t])
            t--;
        if (t == 0)
        {
            final.push_back(-1);
            answer.push_back(final);
            continue;
        }
        else
        {
            t--; // chi so can swap
            int delta = 1e9;
            int indexfind; // chi so thu 2 lon nhat nho va nho hon v[t] de swap
            for (int i = t + 1; i <= t2; i++)
            {
                if (v[t] - v[i] > 0 && v[t] - v[i] < delta)
                {
                    delta = v[t] - v[i];
                    indexfind = i;
                }
            }
            swap(v[t], v[indexfind]);

            answer.push_back(v);
        }
    }

    for (auto x : answer)
    {
        for (int y : x)
            cout << y;
        cout << endl;
    }
    return 0;
}