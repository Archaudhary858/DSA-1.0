#include<iostream>
using namespace std;

int gcd(int a,int b){
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
}

int main(){
    int a,b;
    cout<<"Enter the values of a and b"<<endl;
    cin>>a>>b;

    int ans = gcd(a,b);

    cout<<"The GCD of "<<a<<" & "<<b<<" is "<<ans<<endl;
}