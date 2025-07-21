/*
Nguyen Thanh Sang - PTIT - K25DTCN188
Exercise 41: danh sach doi tuong nhan vien - page 43;
//nạp chồng toán tử nhập xuất
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <sstream>
#include <cctype>
using namespace std;
class nhanvien
{
private:
    string mnv, ht, gt, ns, dc, mst, nkhd;
    static int tongnv;

public:
    nhanvien() : mnv(""), ht(""), gt(""), ns(""), dc(""), mst(""), nkhd("")
    {
        tongnv++;
        ostringstream oss;
        oss << setfill('0') << setw(5) << tongnv;
        mnv = oss.str();
    }
    friend istream &operator>>(istream &in, nhanvien &nv)
    {
        getline(in, nv.ht);
        getline(in, nv.gt);
        getline(in, nv.ns);
        getline(in, nv.dc);
        getline(in, nv.mst);
        getline(in, nv.nkhd);
        return in;
    }
    friend ostream &operator<<(ostream &out, nhanvien &nv)
    {
        cout << nv.mnv << " " << nv.ht << " " << nv.gt << " " << nv.ns << " " << nv.dc << " " << nv.mst << " " << nv.nkhd << endl;
        return out;
    }
};
int nhanvien::tongnv = 0;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<nhanvien> v;
    while (n--)
    {
        nhanvien x;
        cin >> x;
        v.push_back(x);
    }
    for (auto x : v)
        cout << x;

    return 0;
}