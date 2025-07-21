/*
Nguyen Thanh Sang - PTIT - K25DTCN188
Exercise 6: so nguyen to - page 7

*/
#include<iostream>
#include<cmath>
using namespace std;

bool nt(int a){
	for(int i = 2; i <= sqrt(a); i++){
		if(a % i == 0) return false;
	}
	return a > 1 ;
}
int main(){
	int a, b;
	cin>>a>>b;
	for(int num = a + 1; num<b; num ++){
		if(nt(num)) cout<<num<<" ";
	}
	return 0;
}
