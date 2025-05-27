#include<iostream>
#include<stack>
using namespace std;
int main(){
   
  stack<string>s;

  s.push("Abhay");
  s.push("Raj");
  s.push("Chaudhary");

  cout<<"Top Element -> "<<s.top()<<endl;
  cout<<"Size of stack -> "<<s.size()<<endl;
}

//Last In First Out (LIFO)