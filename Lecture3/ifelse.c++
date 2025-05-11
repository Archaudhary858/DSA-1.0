#include<iostream>
using namespace std;

int main(){
    // int a;
    // cout<<"Enter the value of a : ";
    // cin>>a;

    // if(a>0){
    //     cout<<"A is Positive";
    // }
    // else{
    //     cout<<"A is negative";
    // }

    // int c,d;

    // c = cin.get();//provide ASCII value of elements
    // cout<<"Value of a is :"<<c<<endl;

    int a = 2;      // Initialize 'a' with value 2
    int b = a + 1;   // Initialize 'b' with value 3 (2 + 1)

    if ((a = 3) == b) {  // Assign 3 to 'a' and compare 'a' (now 3) with 'b' (3)
        cout << a;       // If true, print 'a' (3)
    }
    else {
        cout << a + 1;   // If false, print 'a + 1' (4)
    }
}
