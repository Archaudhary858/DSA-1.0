#include<iostream>
using namespace std;
int bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){//round
     bool swapped = false;
        for(int j=0;j<n-i;j++){//element comparison

            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }

        }
         if(swapped == false){//already sorted
            break;
         }
    }
}

int main(){
    int arr[5]={2,5,1,6,8};
    bubblesort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}