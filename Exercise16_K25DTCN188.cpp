/*
Nguyen Thanh Sang - PTIT - K25DTCN188
Exercise 16: So nho nhat - lon nhat - page 17


*/
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
   int tongS, sochusoM;
   cin>>sochusoM>>tongS;
   if(tongS==0 && sochusoM ==1) cout<<'0'<<' '<<'0';
   else if((tongS==0 && sochusoM >1)||9*sochusoM < tongS) cout<<"KHONG TON TAI DAP AN!";
   else{
        int S = tongS;
        int M = sochusoM;
        vector<int> maxAnswer(sochusoM);
        for(int i = 0; i< M; i++){
            if(S>=9){ maxAnswer[i] = 9; S-=9;}
            else if(S>0){maxAnswer[i] = S; S = 0;}
            else maxAnswer[i] = 0;
        }
        vector<int> minAnswer(sochusoM);
        S = tongS;
        M = sochusoM;
        for(int i =0; i<M; i++){
            minAnswer[M-1-i] = maxAnswer[i];
        }
        if(minAnswer[0] == 0){
            minAnswer[0] = 1;
            for(int i = 1; i<M; i++){
                if(minAnswer[i] > 0){
                    minAnswer[i]--;
                    break;
                }
                
            }
        }
        for(int x: minAnswer) cout<<x;
        cout<<' ';
        for(int x: maxAnswer) cout<<x;
   }
   

   
   return 0;
}
