#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of an array : ";
    cin>>size;
    int arr[100];
    cout<<"Enter the element of an array : ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<",";
    }
    
    int sum = 0;
    for(int i=0;i<size;i++){
        sum = sum + arr[i];
    }
    cout<<endl<<"Sum of the elemnets of an array : "<<sum;
}