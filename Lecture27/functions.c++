#include<iostream>
using namespace std;

void update(int **p){
    // p=p+1;              //No change
    // *p=*p+1;           //Change in address of p
    **p=**p+1;            //change in i value
}
int main(){
    int i=5;
    int* p=&i;
    int** p2=&p;

    cout<<i<<endl;
    cout<<p<<endl;
    cout<<p2<<endl;
    update(p2);
    cout<<i<<endl;
    cout<<p<<endl;
    cout<<p2<<endl;
}