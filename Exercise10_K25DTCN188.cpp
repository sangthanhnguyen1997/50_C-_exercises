/*
Nguyen Thanh Sang - PTIT - K25DTCN188
Exercise 10: So nguyen duong nho nhat chua xuat hien - page 11
- dùng mảng đánh dấu
- dùng unordered_set tối ưu hơn.
*/
#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int main(){
    int test;
	cin>>test;
    vector<int> answers;
    while(test--){
        int n; cin>>n;
        int i = 0;
        {
            unordered_set<int> mark;
            for(i =0; i<n; i++){
                int x; cin>>x;
                if(x>=0) mark.insert(x);
            }
            for(i = 1; i<n+1; i++){
                if(mark.find(i) ==mark.end()){
                    answers.push_back(i);
                    break;
                }
            }
        
        }
    }

    for(int x:answers) cout<<x<<endl;


	return 0;
}
