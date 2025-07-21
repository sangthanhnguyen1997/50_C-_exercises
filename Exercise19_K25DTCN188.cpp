/*
Nguyen Thanh Sang - PTIT - K25DTCN188
Exercise 19: sap xep chu so - page 20

*/
#include<iostream>
#include<vector>
using namespace std;
void check(long long x, vector<int> &a){
    while(x>0){
        int y = x%10;
        a[y] = 1;
        x/=10;
    }
}
int main(){
    int test; cin>>test;
    vector<vector<int>> v;
    while(test--){
        int n; cin>>n;
        vector<long long> v2;
        v2.reserve(n);
        long long x;
        for(int i = 0; i<n; i++){
            cin>>x; v2.push_back(x);
        }
        vector<int> a(10,0);
        for(long long m: v2){
            check(m,a);
        }
        v.push_back(a);
    }
    for(auto line : v){
        for(int i = 0; i< 10; i++) {if(line[i] == 1) cout<<i<<' ';}
        cout<<endl;
    }
   
   return 0;
}
