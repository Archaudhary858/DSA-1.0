#include<iostream>
using namespace std;
int main(){
    //  int arr[10] = {2,5,6,54};
     
    //  cout<<"Address of first memory block is : "<<arr<<endl;
    //   cout<<"Address of first memory block is : "<<&arr[0]<<endl;//address

    //   cout<<"Value : "<<*arr<<endl; 
    //   cout<<"Value : "<<*arr+1<<endl; 
    //   cout<<"Value : "<<*(arr+2)<<endl; 

    //   int i=3;
    //   cout<<i[arr]<<endl;
    //   cout<<*(i+arr)<<endl;
    //   arr[i] = *(arr+i);  OR  i[arr] = *(i+arr);
        
    int a[20] = {1,2,3,5};

    cout<< &a[0] <<endl;
    cout<< &a <<endl;
    cout<< a <<endl;
//all three will give address

    int *p = &a[0];
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl<<endl; 

    int arr[10];

    // arr=arr+1; -> Error

    int *ptr = &arr[0];
    ptr = ptr + 1;  //it only move the address forward not change it
    cout<< ptr <<endl;
}

