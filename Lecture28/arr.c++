#include<iostream>
using namespace std;

int getsum(int *arr,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum;
}
int main(){
     int n;
     cin>>n;
    //variable size array
     int* arr = new int[n]; // stack = heap

     for(int i=0;i<n;i++){
        cin>>arr[i];
     }

     int ans = getsum(arr,n);
     cout<<ans;

     return 0;
}

//array size should be known at compile time instead of runtime so we generally not take input for size of an array but we will fix this issue using reference variable
//We have two memory stack and heap, stack is small and heap is large memory so if size will be known at the time of compilation then it will be beneficial and if size will be known during runtime then the program will be crashed

//We can make variable size array by using heap memory by using new keyword

//stack -> static memory allocation, heap -> dynamic memory allocation