#include<iostream>
using namespace std;

int firstOcc(int arr[],int n, int key){
    int s=0;
    int e=n-1;
    int ans = -1;
    int mid = s+(e-s)/2;

    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            e=mid-1;
        }
        else if(arr[mid]<key){
             s=mid+1;
        }
        else{
         e=mid-1;
        }
       mid = s+(e-s)/2;
    }
    return ans;
}

int lastOcc(int arr[],int n, int key){
    int s=0;
    int e=n-1;
    int ans = -1;
    int mid = s+(e-s)/2;

    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            s=mid+1;
        }
        else if(arr[mid]<key){
             s=mid+1;
        }
        else{
         e=mid-1;
        }
       mid = s+(e-s)/2;
    }
    return ans;
}

int main(){
    int even[10]={1,2,3,3,3,3,3,3,3,5};
    int ans = firstOcc(even,10,3);
    cout<<"First occurence of key is : "<<ans<<endl;
    cout<<"Last occurence of key is : "<<lastOcc(even,10,3);
}