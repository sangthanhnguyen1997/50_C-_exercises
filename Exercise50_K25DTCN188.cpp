/*
Nguyen Thanh Sang - PTIT - K25DTCN188
Exercise 50: hop va giao cua 2 file van ban - page 54;
bài này output mẫu sai, chu "C++" trong input là in hoa.

*/
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <fstream>
#include <cctype>
using namespace std;
int main()
{
    fstream readout;
    readout.open("DATA1.in", ios::in);
    if (!readout)
    {
        cerr << "Khong mo duoc file!";
        return 1;
    }
    string s;
    map<string, int> mp;
    while (readout >> s)
    {
        mp[s]++;
    }
    readout.close();
    readout.open("DATA2.in", ios::in);
    if (!readout)
    {
        cerr << "Khong mo duoc file!";
        return 1;
    }

    while (readout >> s)
    {
        mp[s]++;
    }
    readout.close();
    for (auto a : mp)
        cout << a.first << ' ';
    cout << endl;
    for (auto a : mp)
    {
        if (a.second > 1)
            cout << a.first << ' ';
    }
    return 0;
}