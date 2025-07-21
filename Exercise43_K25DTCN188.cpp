/*
Nguyen Thanh Sang - PTIT - K25DTCN188
Exercise 43: sắp xếp sinh viên theo mã sinh viên- page 46;
//bài này giống bài 42, viết lại comparator là xong.

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
    return a.msv < b.msv;
}
int main()
{
    vector<sinhvien> v;
    sinhvien x;
    while (true)
    {
        if (!(cin >> x))
            break;
        v.push_back(x);
    }
    sort(v.begin(), v.end(), tieuchisapxep);
    for (auto x : v)
        cout << x;

    return 0;
}