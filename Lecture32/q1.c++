#include<iostream>
using namespace std;

void reachHome(int src,int dest){
    cout<<src<<" "<<dest<<endl;
    //baseline
    if(src == dest){
        cout<<"Reached";
        return;
    }
    //processing
    src++;
    
    //recursive call
    reachHome(src,dest);
}
int main(){
   
int src=1;
int dest=10;
reachHome(src,dest);

}