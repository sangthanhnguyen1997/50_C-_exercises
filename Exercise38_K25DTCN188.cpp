/*
Nguyen Thanh Sang - PTIT - K25DTCN188
Exercise 38: bảng điển thành phần 1 - page 40;

*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <sstream>
#include <cctype>
using namespace std;
struct sinhvien
{
    string msv, ht, l;
    float d1, d2, d3;
    void nhapthongtin()
    {
        getline(cin, msv);
        getline(cin, ht);
        getline(cin, l);
        cin >> d1 >> d2 >> d3;
        cin.ignore();
    }
    void print()
    {
        cout << msv << " " << ht << " " << l << " " << fixed << setprecision(1) << d1 << " " << d2 << " " << d3 << endl;
    }
};
bool sosanhtheomsv(const sinhvien &a, const sinhvien &b)
{
    return a.msv < b.msv;
}
int main()
{
    int cnt;
    cin >> cnt;
    cin.ignore();
    vector<sinhvien> v;
    while (cnt--)
    {
        sinhvien x;
        x.nhapthongtin();
        v.push_back(x);
    }
    sort(v.begin(), v.end(), sosanhtheomsv);
    int i = 1;
    for (auto x : v)
    {
        cout << i << " ";
        i++;
        x.print();
    }
    return 0;
}