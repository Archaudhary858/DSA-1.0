#include<iostream>
using namespace std;

void reverse(int arr[],int n){
    for(int i=0;i<n;i=i+2){
        swap(arr[i],arr[i+1]);
    }
}


void printarray(int arr[],int n){
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
     cout<<endl;
}
int main(){
      int size;
      cout<<"Enter the size of an array : ";
      cin>>size;

      int arr[100];
      cout<<"Enter the element of an array : ";
      for(int i=0;i<size;i++){
          cin>>arr[i];
      }
    reverse(arr,size);
    printarray(arr,size);
}