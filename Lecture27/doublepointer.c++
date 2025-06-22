#include<iostream>
using namespace std;
int main(){
    int i=5;
    int* p = &i;
    int** p2 = &p;

    cout<<p<<endl;
    cout<<&p<<endl;//address
    cout<<p2<<endl;//address

    cout<<*p2<<endl;//address of p
    cout<<**p2<<endl;
}