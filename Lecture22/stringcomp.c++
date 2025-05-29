#include<iostream>
#include<vector>
using namespace std;

int compress(vector<char>& chars){//return length of the vector
     int i=0;
     int ansIndex = 0;
     int n  = chars.size();
     while(i<n){
        int j=i+1;
        while(j<n && chars[i] == chars[j]){
            j++;
        }
         //store old character
          chars[ansIndex++] = chars[i];
          int count = j-1;

          if(count>1){
        //converting counting into single digit and saving in answer
          string cnt = to_string(count);
            for(char ch:cnt){
                chars[ansIndex++] = ch;
            }
          }
          i=j;
     }
     return ansIndex;
}

int main(){
   vector<char>chars = {'a','a','b','b','c','c','c'};
   int ans = compress(chars);
   cout<<ans;
}

//complexity -> time O(n)....Space O(1)