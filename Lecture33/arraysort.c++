#include<iostream>
using namespace std;
bool sorted(int arr[],int size){
    //base case
    if(size==0 || size==1){
        return true;
    }

    if(arr[0]>arr[1]){
        return false;
    }

    else{
        bool remainingPart = sorted(arr+1,size-1);
        return remainingPart;
    }   
}

int main(){
  int arr[5]={2,8,4,5,6};
  int size=5;
  bool ans = sorted(arr,size);

  if (ans){
     cout<<"Array is sorted";
  }
  else{
     cout<<"Not sorted";
  } 
  return 0;
}