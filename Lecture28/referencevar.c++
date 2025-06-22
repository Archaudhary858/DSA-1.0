#include<iostream>
using namespace std;

void update(int &n){
    n++;
}

// int& func(int a){    // bad practice
//     int num = a;
//     int& ans = num;
//     return ans;
// }

// int* fun(int n){      // bad practice
//     int* ptr = &n;
//     return ptr;
// }

int main(){
    // int i = 5;
    // int &j=i;
    // cout<<i<<endl;
    // i++;
    // cout<<i<<endl;
    // j++;
    // cout<<i<<endl;
    // cout<<j<<endl;
  int n=5;
  cout<<"Before : "<<n<<endl;
  update(n);
  cout<<"After : "<<n<<endl;

}