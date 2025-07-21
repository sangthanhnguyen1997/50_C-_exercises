/*
Nguyen Thanh Sang - PTIT - K25DTCN188
Exercise 8: so co dung 3 uoc - page 9
 - so tu nhien n co uoc la i thi cung co uoc la n/i;
 - so tu nhien n co có 3 uoc là 1, n, i = n/i;
 -> n la so chinh phuong, la binh phuong cua mot so nguyen to;
 can tim tat ca cac so co 3 uoc nho hon n;
 -> b1: tim tat ca so nguyen to x <= sqrt(n);
 	b2: tinh binh phuong cua no x.
 	b4: in ra ket qua.
so luong bo test lon => dung thuat toan sang so nguyen to.
bai nay su dung thuat toan sang so nguyen to
	sang so nguyen to: dung mang danh dau.
b1: tao mot sang so tu nhien theo pham vi can su dung
b2: loai bo 2 so 0, 1 khong phai so nguyen to
b3: loai bo cac so la boi cua mot so nguyen to
b5: so con lai la so nguyen to;
	dung mang de luu binh phuong cac so trong khoang can tim
	in ra theo so luong bo test va nhap.

*/
#include<iostream>
#include<cmath>
using namespace std;
void sang(int *b, int n){
	
	b[0] = 1; b[1] = 1;
	for(int i = 2; i <= sqrt(n); i++){
		if(b[i] == 0){
			for(int j = i * i; j<n; j += i){
				b[j] = 1;
			}
		}
	}
//	b[j] = 0 -> j la so nguyen to
}
int main(){
	//prepare for running
	const int index = 1010;
	int sangSoNt[1010] = {0};
	sang(sangSoNt, index);
	 
	//begin official program
	int testCount; cin>>testCount;
	int testCase[testCount];
	for(int i = 0; i< testCount; i++) cin>>testCase[i];
	for(int i = 0; i< testCount; i++){
		float index2 = sqrt(testCase[i]);
		for(int j = 2; j < index2; j++){
			if(sangSoNt[j] == 0) cout<<j*j<<" ";
		}
		cout<<endl;
	}
	return 0;
}
