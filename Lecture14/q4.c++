#include<iostream>
using namespace std;

int binarySearch(int n){
    int s=0;
    int e=n;
    int mid = s+(e-s)/2;
    int ans;
    while(s<=e){
    if(mid*mid>n){
        e=mid-1;
    }
    else if(mid*mid<n){
        ans=mid;
        s=mid+1;
    }
    else if(mid*mid == n){
        return mid;
    }
    mid = s+(e-s)/2;
}
return ans;
}

double morePrecision(int n,int precision,int tempsol){
    double factor = 1;
    double ans = tempsol;
    for(int i=0;i<precision;i++){
          factor = factor/10;
          for(double j=ans;j*j<n; j=j+factor){
              ans = j;
          }
    }
    return ans;
}


int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    int tempSol = binarySearch(n);
    cout<<"Answer is : "<<morePrecision(n,3,tempSol);
    return 0;
}