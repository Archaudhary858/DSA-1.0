#include<iostream>
using namespace std;

int binarySearch(int n){
    int s=0;
    int e=n;
    int mid = s+(e-s)/2;
    int ans;
    while(s<=e){
    if(mid*mid>n){
        e=mid-1;
    }
    else if(mid*mid<n){
        ans=mid;
        s=mid+1;
    }
    else if(mid*mid == n){
        return mid;
    }
    mid = s+(e-s)/2;
}
return ans;
}

int main(){
    int n ;
    cout<<"Enter the number : ";
    cin>>n;
    int sqroot = binarySearch(n);
    cout<<sqroot;
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          