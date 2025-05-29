#include<iostream>
using namespace std;

char maxChar(string s){
      int arr[26] = {0};

      //create an array of count of characters
      for(int i=0;i<s.length();i++){
         char ch=s[i];
         //lowercase
         int number = 0;
         number = ch-'a';  
         arr[number]++;
      }

      //find maximum occ char
      int maxi=-1,ans=0;
      for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
      }
      char finalAns = 'a'+ ans;
      return finalAns;
}

// char maxChar(const std::string& s) {
//     int freq[26] = {0};
//     for (char ch : s) {
//         freq[ch - 'a']++;
//     }
//     int maxIndex = 0;
//     for (int i = 1; i < 26; ++i) {
//         if (freq[i] > freq[maxIndex]) {
//             maxIndex = i;
//         }
//     }
//     return 'a' + maxIndex;
// }


int main(){
    string s = "output";
    // cin>>s;
    cout<<maxChar(s);
}

//cin -> Stop execution due to space,tab,newline

//cin.getline(str,len) -> to get multiple line input e.g My Name is Raj;

//length -> int len = strlen(name);
//compare(s1,s2) -> strcmp(s1,s2);

