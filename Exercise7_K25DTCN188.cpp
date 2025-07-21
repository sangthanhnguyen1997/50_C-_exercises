/*
Nguyen Thanh Sang - PTIT - K25DTCN188
Exercise 7: uoc so nguyen to - page 8

*/
#include<iostream>
#include<cmath>
using namespace std;


int main(){
	int t; cin>>t;
	int arr[t];
	for(int i = 0; i<t; i++){
		cin>>arr[i];
	}
	
	for(int i = 0; i<t; i++){
		int j;
		bool check = true;
		for( j = 2; j <= arr[i]; j++){//ap dung thuat toan check so nguyen to, chu y arr[i] la o nho;
			while(arr[i] % j == 0){
				cout<<j<<" ";
				arr[i] /= j;
				check = false;
			}
			
		}
		if(check) cout<< arr[i]; // kiem tra so nguyen to hay khong?
		cout<<endl;
	}
	return 0;
}
