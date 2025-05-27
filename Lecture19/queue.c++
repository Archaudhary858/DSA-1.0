#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string>q;

    q.push("Love");
    q.push("Babbar");
    q.push("Kumar");

    cout<<"First element -> "<<q.front()<<endl;
    q.pop();
    cout<<"First element -> "<<q.front()<<endl;
}//First In First Out