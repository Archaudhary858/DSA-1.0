#include<iostream>
#include<vector>
using namespace std;
bool searchMatrix(vector<vector<int>>& matrix,int target){
       
    int row = matrix.size();
    int col = matrix[0].size();
    
    int start = 0;
    int end = (row*col)-1;

    int mid = start + (end-start)/2;
    
    while(start<=end){
        int element = matrix[mid/col][mid%col];
        if(element == target){
            return 1;
        }

        if(element < target){
           start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return 0;
} 
int main(){
      
    vector<vector<int>>a={{1,3,5,7},{10,11,16,20},{23,30,34,60}};//sorted in row
    
    cout<<searchMatrix(a,19);

//complexity -> O(log(row * col))
}