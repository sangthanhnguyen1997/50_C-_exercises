/*
Nguyen Thanh Sang - PTIT - K25DTCN188
Exercise 48: so khac nhau trong file - page 52;

*/
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <fstream>
using namespace std;
int main()
{
    fstream readout;
    readout.open("DATA.in", ios::in);
    if (!readout)
    {
        cerr << "Khong mo duoc file!";
        return 1;
    }
    int x;
    map<int, int> mp;
    while (readout >> x)
    {
        mp[x]++;
    }
    readout.close();
    for (auto a : mp)
        cout << a.first << ' ' << a.second << endl;

    return 0;
}