#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter the number : ";
     cin>>n;

     int i=1;
     while(i<=n){
         int k= i-1;
         while(k){
            cout<<" ";
            k--;
     }
        int j=1;
        while(j<=n-i+1){
           cout<<i;
           j++;
        }
        cout<<endl;
        i++;
     }
}