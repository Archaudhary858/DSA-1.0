#include<iostream>
using namespace std;
int main(){
    int arr[6] = {1,3,5,6,4,3};
    int brr[3] = {1,3,8};

    for(int i=0;i<6;i++){
        for(int j=0;j<3;j++){
        if(arr[i] == brr[j]){
            cout<<arr[j]<<" ";
            arr[j] = -665;//not map with other number if extra same number is present
            break;
        }
    }
    }
}

//2 pointer approach 
/*
two arrays arr1 and arr2 have size n and m 
and are sorted in ascending order

while(i<n && j<m){
   if(arr1[i] == arr2[j]){
     cout<<arr[i];
     i++;
     j++;
   }
     else if(arr1[i]<arr2[j]){
          i++;
     }
     else{
     j++;
     }     
}
*/