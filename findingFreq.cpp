#include<iostream>
using namespace std;
int main(){
    int a[100];
    int n,cnt;
    cin>>n;
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    
    for(int i=0;i<n;i++){
        if(a[i]==n){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}