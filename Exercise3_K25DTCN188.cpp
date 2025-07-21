/*
Nguyen Thanh Sang - PTIT - K25DTCN188
Exercise 3: tong giai thua - page 4
S = 1 + 1.2 + 1.2.3 + ...+1.2.3...N
=> dung mang de lu tung so hang; hoac dung de quy
*/

#include<iostream>
using namespace std;

int main(){
	long long arr[21] = {0};
	arr[0] = 1;
	for(int i = 1; i< 21; i++){
		arr[i] = i * arr[i-1];
	}
	int n; cin>>n;
	long long sum = 0;
	for(int i = 1; i<n+1; i++){
		sum = sum + arr[i];
	}
	cout<<sum;
	
	return 0;
}
