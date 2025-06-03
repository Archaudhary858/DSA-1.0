#include<iostream>
using namespace std;

int modularExpo(long long x,long long n,long long m){
     long long res = 1;

     while(n>0){
         if(n&1){//odd
            res = ((res) * (x)%m )%m;
         }
         x =( (x)%m * (x)%m)%m;
         n=n>>1;//divide by 2
     }
     return res;
}

int main(){
   int x,n,m;
   cin>>x>>n>>m;
   cout<<modularExpo(x,n,m);
   
}