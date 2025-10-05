#include<iostream>
using namespace std;

bool search(int arr[],int size,int key){
     if(size==0){
         return false;
     }

     if(arr[0] == key){
        return true;
     }
     else{
        bool remainingpart = search(arr+1,size-1,key);
     }
}


int main(){
    int arr[5] = {2,4,6,8,9};
    int size=5;
    int key = 10;
    bool ans = search(arr,size,key);
    if (ans==1){
        cout<<"Number is Present";
    }
    else{
        cout<<"Number is Not Present";
    }
}