/*
Nguyen Thanh Sang - PTIT - K25DTCN188
Exercise 14: liet ke cac so khac nhau - page 15


*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int mark[1001] = {0};//mang dung de danh dau
    int input[101];//mang de nhap input
    int n;cin>>n;
    //nhap input
    for(int i = 0; i<n; i++){
        cin>>input[i];
        mark[input[i]] = 1;
    }
    //in ra dap an
    for(int i = 0; i<1001; i++){
        if(mark[i] != 0){
            cout<<i<<" ";
        }
    }
	return 0;
}
