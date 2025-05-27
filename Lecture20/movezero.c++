#include<iostream>
using namespace std;

void moveZero(int arr[],int n){
     int non_zero =0;
     for(int j=0;j<n;j++){
        if(arr[j] != 0){
            swap(arr[j],arr[non_zero]);
            non_zero++;
        }
     }
}
int main(){

    int arr[7]={2,0,1,3,0,0,0};
    moveZero(arr,7);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }

     

}

/*
  Input = {2,0,1,3,0,0,0};
  Output = {2,1,3,0,0,0,0}; 
  All 0 moves to the rights
*/