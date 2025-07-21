/*
Nguyen Thanh Sang - PTIT - K25DTCN188
Exercise 49: so khac nhau trong file - page 53;

*/
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <fstream>
#include <cctype>
using namespace std;
int main()
{
    fstream readout;
    readout.open("VANBAN.in", ios::in);
    if (!readout)
    {
        cerr << "Khong mo duoc file!";
        return 1;
    }
    string s;
    set<string> se;
    while (readout >> s)
    {
        for (int i = 0; i < s.length(); i++)
        {
            s[i] = tolower(s[i]);
        }
        se.insert(s);
        s.clear();
    }
    readout.close();
    for (auto a : se)
        cout << a << endl;

    return 0;
}