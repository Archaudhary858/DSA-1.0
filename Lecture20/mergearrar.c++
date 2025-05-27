#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[],int n,int brr[],int m,int crr[]){
   int i=0,j=0;
   int k=0;
   while(i<n && j<m){
      if(arr[i]<brr[j]){
       crr[k]=arr[i];
       k++;
       i++;
      }
      else{
        crr[k]=brr[j];
        k++;
        j++;
      }
   }
   
  while(i<n){
    crr[k] = arr[i];
    k++;
    i++;
  }

  while(j<m){
    crr[k] = brr[j];
    k++;
    j++;
  }

}

int print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[5] = {1,3,5,7,9};
    int brr[3] = {2,4,6};

    int crr[8] = {0};

    merge(arr,5,brr,3,crr);
    print(crr,8);
}