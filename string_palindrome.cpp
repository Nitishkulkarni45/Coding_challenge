#include<iostream>
#include<string.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  int f=0;
  int l = s.length();
  for(int i=0;i<(l/2);i++){
    if(s[i]!=s[l-1-i]){
        f=1;
        break;
    }
    
  }
  if(f==1){
        cout<<"Not a palindrome";
    }
    else{
        cout<<"It is";
    }
}