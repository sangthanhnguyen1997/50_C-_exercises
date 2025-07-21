/*
Nguyen Thanh Sang - PTIT - K25DTCN188
Exercise 9: Chenh lech nho nhat - page 10
//Sắp xếp toàn bộ vector a có n phần tử
sort(a.begin(), a.end());
//Sắp xếp vector a từ chỉ số x tới chỉ số y
sort(a.begin() + x, a.begin() + y + 1);
//Sắp xếp vector giảm dần
sort(a.begin(), a.end(), greater<data_type>());
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	vector<int> v,v1;
	int t;//so luong bo test
	cin>>t;
	while(t--){
		//nhap dau vao voi moi bo test
		int n; cin>>n;
		int x;
		for(int i = 0; i<n; i++){
			cin>>x; v.push_back(x);
		}
		//bat dau xu ly
		if(n<=1){
            cout<<0<<endl;
            continue;
		}
		sort(v.begin(),v.end());
		int min_gap = 1e9+1;
		for(int i = 0; i<n-1; i++){
			int gap = v[i+1] - v[i];
			min_gap = min(gap, min_gap);
		}
		v1.push_back(min_gap);
		v.clear();
	}
	for(int gaps: v1) cout<<gaps<<endl;


	return 0;
}
