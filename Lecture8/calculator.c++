#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number 1 : ";
    cin>>a;
    int b;
    cout<<"Enter the number 2 : ";
    cin>>b;
    char op;
    cout<<"Enter the operation : ";
    cin>>op;
    switch(op){
        case '+' : cout<<(a+b);
        break;

        case '-' : cout<<(a-b);
        break;

        case '*' : cout<<(a*b);
        break;

        case '/' : cout<<(a/b);
        break;

        default : cout<<"Enter the valid Op !!";
    }
}
