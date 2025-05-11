#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value of  n : ";
    cin>>n;

//counting numbers
    // int i=1;
    // while(i<=n){
    //     cout<<i<<" ";
    //     i++;
    // }

//Sum of numbers

  // int i = 1;
  // int sum = 0;
  // while(i<=n){
  //   sum = sum + i;
  //   i=i+1;
  // }
  //  cout<<"Sum of all the numbers are : "<<sum;

//Sum of even numbers
   
  //  int i = 2;
  // int sum = 0;
  // while(i<=n){
  //   sum = sum + i;
  //   i=i+2;
  // }
  //  cout<<"Sum of all Even numbers are : "<<sum;


 //Prime numbers identification

   int i=2;
   while(i<n){
    if((n%i)==0){
      cout<<"n is not a prime number"<<endl;
    }
    else{
      cout<<"n is prime"<<endl;
    }
    i++;
   }
}
