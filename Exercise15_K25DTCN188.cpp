/*
Nguyen Thanh Sang - PTIT - K25DTCN188
Exercise 15: dem so phan tu lap lai - page 16
- bài không nói rõ các số là loại số nào -> giải với trường hợp số tự nhiên.
- dung mang danh dau
- chay 2 vong for
- hoac dung unordered map la toi uu nhat

*/
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
   int test; cin>>test;
   vector<int> answers;
   answers.reserve(test);
   while(test--){
        int n; cin>>n;
        vector<int> answerCase(n);
        for(int &x : answerCase) cin>>x;
        sort(answerCase.begin(), answerCase.end());
        int total = 0;
        for(int i =0; i<n; i++){
           int count = 1;
            while(i+1<n && answerCase[i] == answerCase[i+1]){
                i++;
                count++;
            }
            if(count >1) total+=count;
        }
        answers.push_back(total);
    }
    for(int x: answers) cout<<x<<endl;
   
   return 0;
}
