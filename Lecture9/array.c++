#include<iostream>
using namespace std;
int main(){
    //declare
    int num[15];

    //initialising an array
    int second[3] = {1,4,5};

    int third[15] = {1};
    int n =15;
    for(int i=0;i<n;i++){
        cout<<third[i]<<" ";
    }
    
    cout<<endl<<"Value at 1 index : " << second[2]<<endl;
    cout<<endl<<"Everything is Fine" <<endl;

    int thirdsize = sizeof(third)/sizeof(int);
    cout<<"Size is equal to : "<< thirdsize;
}