/*
Nguyen Thanh Sang - PTIT - K25DTCN188
Exercise 42: sắp xếp sinh viên theo lớp - page 45;
//can viet 2 operator cho 2 tieu chi la lop va ma sinh vien

*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <sstream>
#include <cctype>
using namespace std;
class sinhvien
{
private:
    string msv, ht, l, email;

public:
    sinhvien() : msv(""), ht(""), l(""), email("") {}
    friend istream &operator>>(istream &in, sinhvien &sv)
    {
        getline(in, sv.msv);
        getline(in, sv.ht);
        getline(in, sv.l);
        getline(in, sv.email);
        return in;
    }
    friend ostream &operator<<(ostream &out, sinhvien &sv)
    {
        cout << sv.msv << ' ' << sv.ht << ' ' << sv.l << ' ' << sv.email << endl;
        return out;
    }
    friend bool tieuchisapxep(const sinhvien &a, const sinhvien &b);
};
bool tieuchisapxep(const sinhvien &a, const sinhvien &b)
{
    if (a.l != b.l)
        return a.l < b.l;
    else
        return a.msv < b.msv;
}
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<sinhvien> v;
    while (n--)
    {
        sinhvien x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end(), tieuchisapxep);
    for (auto x : v)
        cout << x;

    return 0;
}