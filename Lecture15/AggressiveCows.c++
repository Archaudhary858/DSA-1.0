#include<iostream>
#include<math.h>
using namespace std;
bool isPossible(int arr[],int k, int mid ,int n){
      int cowCount=1;
      int firstPos = arr[0];
      for(int i=0;i<n;i++){
            if(arr[i]-firstPos>=mid){
                cowCount++;
                if(cowCount==k){
                    return true;
                }
                firstPos = arr[i];
            }
      }
      return false;
}

int aggressiveCow(int arr[],int n,int k){
    //    sort(arr[0],arr[n-1]);
       int s=0 ;
       int maxi = -1;
       for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
       }
       int e= maxi;
       int ans = -1;
       int mid=s+(e-s)/2;

       while(s<=e){
          if(isPossible(arr,k,mid,n)){
              ans=mid;
              s=mid+1;
          }
          else{
            e=mid-1;
          }
          mid=s+(e-s)/2;
       }
       return ans;
}
int main(){
     int arr[5] = {1, 2, 3, 4, 6};
     int ans = aggressiveCow(arr,5,2);
     cout<<ans;
}