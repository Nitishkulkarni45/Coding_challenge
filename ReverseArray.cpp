#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
  for(int i=0;i<n;i++){
    b[i] = a[n-i-1];
  }
  for(int i=0;i<n;i++){
    cout<<b[i]<<endl;
  }
}