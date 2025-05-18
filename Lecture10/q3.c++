#include<iostream>
using namespace std;
int main(){
     int arr[100]={1,3,5,7,3};
 int duplicate=0;
    for(int i=0;i<5;i++){
          duplicate = duplicate^arr[i];
    }
    cout<<duplicate;
}