#include<iostream>
using namespace std;
int main(){

//     int num = 5;
//     cout<<num<<endl;

//     //address of operator - &

//     cout<<"Address of num is : "<<&num<<endl;
    
//     int *ptr = &num;
//     cout<<"Value is : "<<*ptr<<endl;

//    double d = 4.3;
//    double *p = &d;

//    cout<<"Adress is : "<<p<<endl;
//    cout<<"Value is : "<<*p<<endl;

//    cout<<"Size of integer is : "<<sizeof(num)<<endl;
//    cout<<"Size of pointer is : "<<sizeof(ptr)<<endl;
//    cout<<"Size of pointer is : "<<sizeof(p)<<endl;


    //pointer to int is created and pointing to some garbage address

    // int *p = 0;

    // cout<<*p<<endl;//segmentation fault
   
    int i = 5;
    // int *ptr = 0;
    // ptr = &i;
    // cout<<*ptr<<endl;

    int num = 5;
    int *ptr = &num;

    cout<<num<<endl;

       (*ptr)++;

    cout<<num<<endl;

//copying  the pointer

    int*q = ptr;

    cout<<ptr<<" - "<<q<<endl;
    cout<<*ptr<<" - "<<*q<<endl;

//important concept

    int *t = &i;
    cout<<(*t)++<<endl;
    cout<<i<<endl;
    cout<<"Before t : "<<t<<endl;

    t=t+1;//move after 4 bytes

    cout<<"After t : "<<t<<endl;
    return 0;
} 