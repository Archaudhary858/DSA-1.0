#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<int>& nums,int k){
        vector<int>temp(nums.size());
        
        for(int i=0;i<nums.size();i++){
            temp[(i+k)%nums.size()]=nums[i];
        }
        nums=temp;//update
};

int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(7);
    v.push_back(9);
    v.push_back(11);

    rotate(v,2);
    for(int i=0;i<4;i++){
      cout<<v[i]<<" ";
    }
}

//temp is used to overcome overwrite of the element


//ARRAY CODE

/*
void rotate(int nums[], int n, int k) {
    int temp[n];

    for (int i = 0; i < n; i++) {
        temp[(i + k) % n] = nums[i];
    }

    // Copy temp back to nums
    for (int i = 0; i < n; i++) {
        nums[i] = temp[i];
    }
}
*/