/*
Nguyen Thanh Sang - PTIT - K25DTCN188
Exercise 4: can bang chan le - page 5
ham dem so chan, so so le
ham kiem tra so chan le.
*/
#include<iostream>
#include<cmath>
using namespace std;
bool soCanBang(long long a){
	int chuSoChan = 0;
	int chuSoLe = 0;
	int b;
	while(a>0){
		b = a %10;
		a /= 10;
		if (b % 2 == 0){
			++chuSoChan;
		}else{
			++chuSoLe;
		}
	}
	
	return chuSoChan == chuSoLe;
}

int main(){
	int n; cin>>n;
	long long pivot = pow(10, n); 
	--n;
	long long num = pow(10, n);
	int count = 0;
	
	while(num < pivot){
		if(soCanBang(num)){
			cout<<num<<" ";
			count++;
			
		}
		if(count == 10){
			cout<<endl;
			count = 0;
		}
		++num;
		
	}
	
	return 0;
}
