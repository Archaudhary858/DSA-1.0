#include<iostream>
using namespace std;
int global=5;
void a(int i){
    cout<<global;
}
int main(){
     cout<<global<<endl;
     a(4);                         
}