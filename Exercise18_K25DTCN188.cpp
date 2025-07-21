/*
Nguyen Thanh Sang - PTIT - K25DTCN188
Exercise 18: Loai bo nguyen am - page 19

*/
#include<iostream>
#include<string>
#include<ctype.h>
#include<unordered_map>
using namespace std;

int main(){
    string s;
    string y = "ueoaiyUEOAIY";
    unordered_map<char,int> mp;
    for(char x: y) mp[x]++;
    getline(cin, s);
    for(char &x: s){
      if(mp[x] > 0) continue;
      else{
        x = tolower(x);
         cout<<'.'<<x;
      } 
    }
   
   return 0;
}
