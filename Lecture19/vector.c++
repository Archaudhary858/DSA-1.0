#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>a(5,1);
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;

    vector<int>v;
    cout<<"Capacity -> "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity -> "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity -> "<<v.capacity()<<endl;
    
    v.push_back(3);
    cout<<"Capacity -> "<<v.capacity()<<endl;
    cout<<"Size -> "<<v.size()<<endl;
    
    v.clear();
    cout<<"Capacity -> "<<v.capacity()<<endl;
    cout<<"Size -> "<<v.size()<<endl;
}