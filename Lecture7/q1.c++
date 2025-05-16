#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int digit=0;
    int i=0;
    int ans=0;
    while(n!=0){
        
        digit = n%10;
        if((ans>INT16_MAX/10) || (ans<INT16_MIN/10)){
            cout<< 0;
        }
        ans=ans*10 + digit;
        n=n/10;
    }
    cout<<ans;
}