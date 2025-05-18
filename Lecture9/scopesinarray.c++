#include<iostream>
using namespace std;

//Update in one array will change the original array

void update(int arr[],int n){
   cout<<"Inside the function : "<<endl;
   
   //updating array's first element
   arr[0] = 120; 
   
   //printing the array
   for(int i=0;i<3;i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;
}

int main(){
     int arr[3] = {1,2,3};
     update(arr,3);
    cout<<"Inside the main function "<<endl;
     //printing the array
   for(int i=0;i<3;i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;
}