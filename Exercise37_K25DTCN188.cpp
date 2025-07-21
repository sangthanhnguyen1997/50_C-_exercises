/*
Nguyen Thanh Sang - PTIT - K25DTCN188
Exercise 37: sắp xếp danh sách nhân viên - page 38;
//có thể tối ưu bằng tuple để lưu ngày tháng năm, và tách tông tin ngày tháng năm ngay khi nhập.

*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <sstream>
#include <cctype>
using namespace std;
struct nhanvien
{
    string maNhanVien, hoTen, gioiTinh,
        ngaySinh, diaChi, maSoThue, ngayKiHopDong;
    static int tongNhanVien;

    nhanvien() : maNhanVien(""), hoTen(""), gioiTinh(""), ngaySinh(""), diaChi(""), maSoThue(""), ngayKiHopDong("") {}

    string genMNV()
    {
        ostringstream oss;
        this->tongNhanVien += 1;
        string mnv;
        oss << setfill('0') << setw(5) << this->tongNhanVien;
        mnv = oss.str();
        return mnv;
    }

    void nhapthongtin()
    {
        string ht, gt, ns, dc, mst, nkhd;
        getline(cin, ht);
        getline(cin, gt);
        getline(cin, ns);
        getline(cin, dc);
        getline(cin, mst);
        getline(cin, nkhd);
        this->hoTen = ht;
        this->gioiTinh = gt;
        this->ngaySinh = ns;
        this->diaChi = dc;
        this->maSoThue = mst;
        this->ngayKiHopDong = nkhd;
        this->maNhanVien = genMNV();
    }
    void print()
    {
        cout << hoTen << " "
             << gioiTinh << " "
             << ngaySinh << " "
             << diaChi << " "
             << maSoThue << " "
             << ngayKiHopDong << endl;
    }
};
void tachNgayThangNam(const string &a, int &ngay, int &thang, int &nam)
{
    ngay = stoi(a.substr(0, 2));
    thang = stoi(a.substr(3, 2));
    nam = stoi(a.substr(6, 4));
}
bool sapxeptheongaysinh(const nhanvien &A, const nhanvien &B)
{
    int ngayA, thangA, namA;
    int ngayB, thangB, namB;
    tachNgayThangNam(A.ngaySinh, ngayA, thangA, namA);
    tachNgayThangNam(B.ngaySinh, ngayB, thangB, namB);
    if (namA != namB)
        return namA < namB;
    if (thangA != thangB)
        return thangA < thangB;
    return ngayA < ngayB;
}
int nhanvien::tongNhanVien = 0;
int main()
{
    int cnt;
    cin >> cnt;
    cin.ignore();
    vector<nhanvien> v;
    while (cnt--)
    {
        nhanvien x;
        x.nhapthongtin();
        v.push_back(x);
    }
    sort(v.begin(), v.end(), sapxeptheongaysinh);
    for (auto x : v)
        x.print();
    return 0;
}