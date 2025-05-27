#include<iostream>
#include<algorithm>
using namespace std;
void reverse(int arr[],int n,int m){
    int s=m+1;
    int e=n-1;
    while(s<=e){
      
        swap(arr[s],arr[e]);
        s++;
        e--;
      
    }
}

int main(){
     int arr[6] = {1,2,3,4,5,6};
     reverse(arr,6,3); 
     for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
     }
}