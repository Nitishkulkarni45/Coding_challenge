#include<iostream>
using namespace std;
int main(){
    int n,min=1;
    cin>>n;
    int s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    for(int i=0;i<n;i++){
        if(s[i]<min){
            min = s[i];
            cout<<min;
        }
    }
    // cout<<min;
}