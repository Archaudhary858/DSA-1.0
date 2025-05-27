#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string>m;
    m[1]="Abhay";
    m[2]="Love";
    m[13]="Raj";
    m.insert({5,"Hello"});
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"Finding 13 -> "<<m.count(13)<<endl; 
    
    auto it = m.find(5);
    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }
}