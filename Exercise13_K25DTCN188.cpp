/*
Nguyen Thanh Sang - PTIT - K25DTCN188
Exercise 13: bien cua ma tran vuong - page 14
-dùng mảng vector để lưu đầu vào các test case
-với mỗi testcase khai báo một một mảng động 2 chiều ma trận vuông
- nhập và in ra.

*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int testCount;
    cin>>testCount;
    int t = testCount;
    vector<vector<int>>v;
    v.reserve(testCount);
    //nhập vào các test lưu vào vector.
    while(t--){
        int n; cin>>n;
        vector<int>test;
        test.reserve(n*n+1);
        test.push_back(n);
        for(int i = 0; i<n*n; i++){
            int x; cin>>x; test.push_back(x);
        }
        v.push_back(test);
    }
    //bắt đầu xử lý từng test
    
        for(const auto &line :v){
            int n2 = line[0]; int count = 1;
            //nhập vào ma trận vuông
            vector<vector<int>> matrix(n2,vector<int>(n2));
            for(int i = 0; i<n2; i++){
                for(int j = 0; j<n2; j++){
                    matrix[i][j] = line[count];
                    count++;
                }
            }
            //in ra ma trận vuông với các viền và rỗng ở giữa
            for(int i = 0; i<n2; i++){
                for(int j = 0; j<n2; j++){
                    if(i==0||j==0||i==n2-1||j==n2-1) cout<<matrix[i][j]<<" ";
                    else cout<<"  ";
                    
                }
                cout<<endl;
            }
            cout<<endl;//xuống ròng với mỗi test case
        }
    

	return 0;
}
