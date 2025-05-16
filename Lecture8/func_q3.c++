#include<iostream>
using namespace std;
int fact(int n){
    int ft = 1;
    for(int i=0;i<n;i++){
        ft = ft*(n-i);
    }
    return ft;
}

int nCr(int n,int r){
    int num = fact(n);
    int den = fact(r)*fact(n-r);
    int ans = num/den;
    return ans;
}

int main(){
     int n;
     cout<<"Enter the n : ";
     cin>>n;
      int r;
     cout<<"Enter the r : ";
     cin>>r;
    
     int factorial = nCr(n,r);
     cout<<factorial;
    return 0;
}
