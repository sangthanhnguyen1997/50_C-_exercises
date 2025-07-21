/*
Nguyen Thanh Sang - PTIT - K25DTCN188
Exercise 21: cau truc nhan vien - page 22

*/
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
struct nhanvien{
    const string MANHANVIEN = "00001";
    string hoten;
    string gioitinh;
    string ngaysinh;
    string diachi;
    string masothue;
    string ngaykihopdong;
    
};
typedef struct nhanvien nhanvien;
int main(){
    nhanvien a;
    getline(cin, a.hoten);
    getline(cin, a.gioitinh);
    getline(cin, a.ngaysinh);
    getline(cin, a.diachi);
    getline(cin, a.masothue);
    getline(cin, a.ngaykihopdong);
    cout<<a.MANHANVIEN<<' '<<a.hoten<<' '<<a.ngaysinh<<' '
    <<a.diachi<<' '<<a.masothue<<' '<<a.ngaykihopdong;
    return 0;
}
