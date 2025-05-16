#include<iostream>
using namespace std;
int evenodd(int n){
    if(n%2 == 0){
        cout<<"Number is Even";
    }
    else{
        cout<<"Number is Odd";
    }
}

int main(){
     int n;
     cout<<"Enter the number : ";
     cin>>n;

     evenodd(n);
    return 0;
}
