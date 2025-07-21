/*
Nguyen Thanh Sang - PTIT - K25DTCN188
Exercise 11: quay vong day so 1 - page 12
- dung ham rotate trong c++ cho nhanh;

*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int test; cin>>test;
    vector<vector<int>> answers;
    int t = test;
    answers.reserve(test);
    
    while(t--){
        int n, d;
        {
            cin>>n>>d;
            int changIndex = d % n;
            //input every test
            vector<int> v;
            v.reserve(n);
            for(int i = 0; i<n; i++){
                int x; cin>>x; v.push_back(x);
            }
            //rotated
            vector<int> rotated;
            for(int i = changIndex; i<n; i++) rotated.push_back(v[i]);
            for(int i = 0; i<changIndex; i++) rotated.push_back(v[i]);
            //save answer
            answers.push_back(rotated);
    
        }
    }
    for(const auto& line : answers ){
        for(int x : line) cout<<x<<" ";
        cout<<endl;
    }
	return 0;
}
