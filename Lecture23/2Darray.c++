#include<iostream>
using namespace std;

bool isPresent(int arr[][4],int target, int i,int j){
    for(int i=0;i<3;i++){
         for(int j=0;j<4;j++){
             if(arr[i][j] == target){
                 return 1;
            }
         }
    }
    return 0;
}

int main(){
     
    int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    //input
    // for(int i=0;i<3;i++){
    //      for(int j=0;j<4;j++){
    //         cout<<"Enter the element : ";
    //          cin>>arr[i][j];
    //      }
    // }


    // int arr[3][4];
    // cout<<endl;
    //output
    for(int i=0;i<3;i++){
         for(int j=0;j<4;j++){
             cout<<arr[i][j]<<" ";
         }
         cout<<endl;
    } 


    cout<<"Enter the element to search : "<<endl;
    int target;
    cin>>target;


    if(isPresent(arr,target,3,4)){
        cout<<"Element Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
}
