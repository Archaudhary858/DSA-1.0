#include<iostream>
using namespace std;

int sumall(int arr[],int size){
    if (size==0){
        return 0;
    }
    if (size==1){
        return arr[0];
    }
    int sum = arr[0]+arr[1];
    return sum + sumall(arr+2,size-2);
}


int main(){
    int arr[5] = {3,2,5,1,6};
    int size=5;

   int ans = sumall(arr,size);
   cout<<ans;
}