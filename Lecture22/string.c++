#include<iostream>
using namespace std;
int main(){
    char name[10];//remaining space is filled by '/0' -> Null Character
   
    cout<<"Enter the name : ";
    cin>>name;

    cout<<"Your name is : ";
    cout<<name<<endl;

}

//Null character use as a terminator it will tell where the string will end