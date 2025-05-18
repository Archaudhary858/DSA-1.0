#include<iostream>
using namespace std;
int getmax(int num[],int n){
     int maximum = INT16_MIN;

     for(int i=0;i<n;i++){
        maximum = max(maximum,num[i]);
     }
     return maximum;
}

int getmin(int num[],int n){
     int minimum = INT16_MAX;

     for(int i=0;i<n;i++){
        minimum = min(minimum,num[i]);
     }
     return minimum;
}


int main(){
    int size;
    cout<<"Enter the size of an array : ";
    cin>>size;

    // int arr[size];// IT IS NOT GOOD PRACTICE

    int num[100];
    for(int i=0;i<size;i++){
        cout<<"Enter the element of an array "<<i<< " : ";
        cin>>num[i];
    }

    for(int i=0;i<size;i++){
        cout<<num[i]<<",";
    }
    cout<<endl;

    cout<<"Max value is : "<<getmax(num,size)<<endl;
    cout<<"Min value is : "<<getmin(num,size);
}