#include<iostream>
using namespace std;

bool binarySearh(int arr[],int s,int e,int key){
    int mid=(s+e)/2;
    //basecase
    if(s>e){
        return false;
    }
    if(arr[mid]==key){
        return true;
    }
  
    if(arr[mid]>key){
        return binarySearh(arr,s,mid-1,key);
    }
    if(arr[mid]<key){
        return binarySearh(arr,mid+1,e,key);
    }
    

}

int main(){
    int arr[5] = {2,4,6,8,9};
    int s=0;
    int e=5;
    int key = 26;
    bool ans = binarySearh(arr,s,e,key);
    if(ans){
        cout<<"Number is found";
    }
    else{
         cout<<"Number is not found";
    }
}