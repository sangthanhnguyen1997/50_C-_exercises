/*
Nguyen Thanh Sang - PTIT - K25DTCN188
Exercise 17: Đầu cuối giống nhau - page 18
substring - A substring of a string is a sequence of consecutive characters 
that appears in the same order and is contiguous within the original string.
It can be formed by removing zero or more characters from the beginning 
and/or the end of the string — but not from the middle. not including empty string.

//một xâu có n kí tự gống nhau thì có n(n-1)/2 xâu con hình thành từ n kí tự đó
//và có đầu và cuối xâu là các kí tự giống nhau - không tính xâu có 1 ký tự => dùng map cho nhanh
*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<unordered_map>


using namespace std;

int main(){
    
   string s;
   int test;
   cin>>test;
   cin.ignore();
   vector<int> v;
   v.reserve(test);
    while(test--){
        getline(cin,s);
        unordered_map<char,int> mp;
        int answer = 0;
        for(char x: s) mp[x]++;
        for(auto x: mp){
            if(x.second>1){
                int n = x.second;
                answer += (n*n-n)/2;
            }
        }

        answer+=s.length();
       
        v.push_back(answer);
    }
    for(int x:v) cout<<x<<endl;
   
   return 0;
}
