/*
Nguyen Thanh Sang - PTIT - K25DTCN188
Exercise 40: trẻ nhất già nhất - page 42;

*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <sstream>
#include <cctype>
using namespace std;
struct nguoi
{
    string ten;
    int ns;
    int ts;
    int nms;
    void nhapthongtin()
    {
        string s;
        getline(cin, s);
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '/')
                s[i] = ' ';
        }
        stringstream ss(s);
        ss >> ten;
        ss >> ns;
        ss >> ts;
        ss >> nms;
    }
};
bool sxtheodotuoi(const nguoi &a, const nguoi &b)
{
    if (a.nms != b.nms)
        return a.nms < b.nms;
    if (a.ts != b.ts)
        return a.ts < b.ts;
    return a.ns < b.ns;
}
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<nguoi> v;
    while (n--)
    {
        nguoi x;
        x.nhapthongtin();
        v.push_back(x);
    }
    sort(v.begin(), v.end(), sxtheodotuoi); // nguoi gia xep truoc
    cout << v[v.size() - 1].ten << endl;    // in ra nguoi tre
    cout << v[0].ten;                       // in ra nguoi gia

    return 0;
}