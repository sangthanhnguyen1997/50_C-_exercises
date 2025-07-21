/*
Nguyen Thanh Sang - PTIT - K25DTCN188
Exercise 46: Danh sách doanh nghiệp nhận nhân viên thực tập- page 50;
*/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
class CongTy
{
private:
    string mact, tenct;
    int sl;

public:
    CongTy() : mact(""), tenct(""), sl(0) {}
    // comparator
    bool sxSL(CongTy &other) const;
    friend istream &operator>>(istream &in, CongTy &ct)
    {
        getline(in, ct.mact);
        getline(in, ct.tenct);
        in >> ct.sl;
        in.ignore();
        return in;
    }
    friend ostream &operator<<(ostream &out, const CongTy ct)
    {
        out << ct.mact << ' ' << ct.tenct << ' ' << ct.sl << endl;
        return out;
    }
    int getSL() const { return this->sl; }
};
bool cmp(const CongTy &a, const CongTy &b) { return a.getSL() > b.getSL(); }

int main()
{
    int luong;
    cin >> luong;
    cin.ignore();
    vector<CongTy> v;
    while (luong--)
    {
        CongTy x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end(), cmp);
    for (auto I : v)
        cout << I;

    return 0;
}