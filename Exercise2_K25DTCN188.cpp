/*
Nguyen Thanh Sang - PTIT - K25DTCN188
Exercise 2: chua hoa - chu thuong
char data type
	65 <= ki tu in hoa <= 90
	97 <= ki tu in thuong <= 122
	a = A + 32
*/

#include<iostream>
using namespace std;
void change(char &a){
//	code nhu the nay may se thuc thi sai vi sao? tim hieu them dang truyen dia chi vao ham
//	if(97 <= a && a <= 122){
//		a = a - 32;
//	}
//	if(65 <= a && a <= 90){
//		a = a + 32;
//	}
	if(97 <= a && a <= 122){
		a = a - 32;
	}
	else if(65 <= a && a <= 90){
		a = a + 32;
	}
}
int main(){
	int n; cin>>n;
	char a[n];
	for(int i = 0; i<n; i++){
		cin>>a[i];
	}
	for(int i = 0; i<n; i++){
		change(a[i]);
	}
	for(int i = 0; i<n; i++){
		cout<<a[i]<<endl;
	}
	
	return 0;
}
