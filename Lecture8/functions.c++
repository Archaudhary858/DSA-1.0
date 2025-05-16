#include<iostream>
using namespace std;

int power(int base,int pow){
    int value=1;
    for(int i=1;i<=pow;i++){
       value = base*value;
    }
    return value;
}
int main(){ 
    int a,b;
    cin>>a>>b;
    int ans =  power(a,b);
    cout<<ans;
    return 0;
}