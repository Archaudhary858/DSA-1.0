#include<iostream>
using namespace std;
char tolowercase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp = ch-'A'+'a';
        return temp;
    }
}
int getLength(char name[]){
    int count=0;
   for(int i=0; name[i] != '\0';i++){
     count++;
   }
   return count;
}

bool checkpalindrome(char a[],int n){
   int s=0;
   int e=n-1;

   while(s<=e){
    if(tolowercase(a[s]) != tolowercase(a[e])){
       return 0;
    }
    else{
        s++;
        e--;
    }
   }
   return 1;
}

int main(){
       
    char name[20];
    cout<<"Enter your name : ";
    cin>>name;
    cout<<"Your name is : ";
    cout<<name<<endl;
    int len = getLength(name);
    cout<<checkpalindrome(name,len);


}