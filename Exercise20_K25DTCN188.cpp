/*
Nguyen Thanh Sang - PTIT - K25DTCN188
Exercise 20: cau truc thi sinh - page 21

*/
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
struct nhanvien{
    string hoten;
    string ngaysinh;
    float diemmon1;
    float diemmon2;
    float diemmon3;
    float tongdiem(){ return diemmon1 + diemmon2 + diemmon3;}
};
typedef struct nhanvien nhanvien;
int main(){
    nhanvien a;
    getline(cin, a.hoten);
    getline(cin, a.ngaysinh);
    cin>>a.diemmon1;
    cin>>a.diemmon2;
    cin>>a.diemmon3;
    cout<<a.hoten<<' '<<a.ngaysinh<<' '<<fixed<<setprecision(1)<<a.tongdiem();
    return 0;
}
