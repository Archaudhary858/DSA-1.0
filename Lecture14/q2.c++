#include<iostream>
using namespace std;


int getPivot(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid = s+(e-s)/2;

    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid = s+(e-s)/2;
    }
    return s;
}

int binarySearch(int arr[],int s,int e,int key){

    int start = s;
    int end = e;
    // int mid=(start+end)/2;  //this may create error because of size of int instead of this we can use 

    int mid = start + (end-start)/2;
    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }
        if(key>arr[mid]){
            start = mid+1;
        }
        else{
            end=mid-1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

int main(){
    int k=9;
    int arr[5]={3,5,7,8,9};
    int pivot = getPivot(arr,5);
     if(k>=arr[pivot] && k<=arr[4]){
         cout<< binarySearch(arr,pivot,4,k);
     }
     else{
        cout<< binarySearch(arr,0,pivot-1,k);
     }
}