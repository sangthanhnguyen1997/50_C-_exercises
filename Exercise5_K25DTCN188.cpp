/*
Nguyen Thanh Sang - PTIT - K25DTCN188
Exercise 5: so may man - page 6

*/
#include<iostream>
using namespace std;

bool soMayMan(int a){
	return a % 100 == 86;
}
int main(){
	int n; cin>>n;
	int arr[20]={0};
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}
	for(int i = 0; i<n; i++){
		if(soMayMan(arr[i])) cout<<1<<endl;
		else cout<<0<<endl;
	}
	
	
	return 0;
}
