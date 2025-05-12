#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter the number : ";
     cin>>n;

     int i=1;
     while(i<=n){

         int k= n-i;
         while(k){
            cout<<" ";
            k--;
     }
        int j=1;
        while(j<=i){
           cout<<"*";
           j++;
        }
        cout<<endl;
        i++;
     }
}