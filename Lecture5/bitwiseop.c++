#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number a : ";
    cin>>a;

    int b;
    cout<<"Enter the number b : ";
    cin>>b;

    cout<<(a&b)<<endl;
    cout<<(a|b)<<endl;
    cout<<(~a)<<endl;
    cout<<(a^b)<<endl;

}