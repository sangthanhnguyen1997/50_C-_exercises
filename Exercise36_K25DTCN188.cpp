/*
Nguyen Thanh Sang - PTIT - K25DTCN188
Exercise 36: danh sach sinh vien 3 - page 37;
bài này như bài danh sách sinh viên 2 ex35 -p 36 nhưng thêm phần chuyển hóa tên
->copy sửa code;
->them phan sap xep sinh vien theo gap
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
    string hoten;
    string lop;
    string ngaysinh;
    float diemgpa;
    string masinhvien; // ma sinh vien = B20DCCN + sothutu;
    int sothutu;       // = tong so sinh vien +1 tai thoi diem nhap
    static int tongsosinhvien;
    sinhvien() : hoten(""), lop(""), ngaysinh(""), diemgpa(0), masinhvien(""), sothutu(0) {}
    sinhvien(string a, string b, string c, float d) : hoten(a), lop(b), ngaysinh(c), diemgpa(d) {}
    // nạp chồng toán tử so sánh cho hàm sort
    bool operator<(const sinhvien &other)
    {
        return diemgpa > other.diemgpa;
    }
    void print()
    {
        cout << masinhvien << ' ' << hoten << ' ' << lop << ' ' << ngaysinh << ' ' << fixed << setprecision(2) << diemgpa << endl;
    }
    void capNhatTongSinhVien() { this->tongsosinhvien += 1; }
    void chuanhoathongtin()
    { // them so thu tu
        this->sothutu = tongsosinhvien + 1;
        // chuan hoa ma sinh vien
        ostringstream oss;
        oss << "B20DCCN" << setfill('0') << setw(3) << this->sothutu;
        this->masinhvien = oss.str();
        oss.str("");
        oss.clear();
        // chuan hoa ngay sinh
        istringstream iss(this->ngaysinh);
        string ngay = "", word;
        while (getline(iss, word, '/'))
        {
            if (word.length() < 2)
                ngay = ngay + '0' + word + '/';
            else
                ngay = ngay + word + '/';
        }
        iss.str("");
        iss.clear();
        ngay.pop_back();
        this->ngaysinh = ngay;
        // chuan hoa ten.
        iss.str(this->hoten);
        string wordTen;
        word.clear();
        while (getline(iss, word, ' '))
        {
            for (int i = 0; i < word.length(); i++)
            {
                word[i] = tolower(word[i]);
            }

            word[0] = toupper(word[0]);
            wordTen = wordTen + word + ' ';
        }
        wordTen.pop_back();
        this->hoten = wordTen;
        // cap nhat tong sinh vien sau khi chuẩn hóa thành công
        capNhatTongSinhVien();
    }
    void nhapthongtin()
    {
        string ten, lop, ngaysinh;
        float gpa;
        getline(cin, ten);
        getline(cin, lop);
        getline(cin, ngaysinh);
        cin >> gpa;
        cin.ignore();
        this->hoten = ten;
        this->lop = lop;
        this->ngaysinh = ngaysinh;
        this->diemgpa = gpa;
    }
};
int sinhvien::tongsosinhvien = 0;
int main()
{
    int test;
    cin >> test;
    cin.ignore();
    vector<sinhvien> v;
    while (test--)
    {
        sinhvien x;
        x.nhapthongtin();
        x.chuanhoathongtin();
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for (auto x : v)
        x.print();
    return 0;
}