#include<iostream>
using namespace std;
int main(){
    int n=2 ;

    switch(n){
        case 1: cout<< "First" <<endl;
                break;// to move out of the switch statement
        case 2: cout<< "Second" <<endl; 
                break;
        default: cout<< "It is default case" <<endl;      
    }
}

// use of continue in switch statement is not valid