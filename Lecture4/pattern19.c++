#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    int i=1;
    while(i<=n){

        int j=1;
        while(j<=n-i+1){
            cout<<j<<" ";
            j++;
        }

        int star = i-1;
        while(star){
            cout<<"*"<<" ";
            star--;
        }

        int st = i-1;
        while(st){
            cout<<"*"<<" ";
            st--;
        }

        int num = n-i+1;
        while(num){
            cout<<num<<" ";
            num--;
        }

        cout<<endl;
        i++;
    }
    

}