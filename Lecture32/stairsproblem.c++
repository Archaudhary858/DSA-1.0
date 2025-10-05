#include<iostream>
using namespace std;
int countStairs(int n){
    if(n<0){
    return 0;
    }
    if(n==1){
        return 1;
    }
    int ans = countStairs(n-1) + countStairs(n-2);
    return ans;
}
int main(){
     int n;
     cin>>n;
     cout<<countStairs(n);
}