#include<iostream>
using namespace std;
int main(){
    int n,max=0;
    cin>>n;
    int s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    for(int i=0;i<n;i++){
        if(s[i]>max){
            max = s[i];
        }
    }
    cout<<max;
}