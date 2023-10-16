#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int m = n/2;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int j=0;j<m-1;j++){
        for(int i = 0;i<m-i-1;i++){
        int temp;
        if(a[i]>a[i+1]){
            temp = a[i];
            a[i]=a[i+1];
            a[i+1] = temp;
            cout<<a[i]<<endl;
        }
        }
    
    for(int j=m;j<n-1;j++){
        for(int i = m;i<n-i-1;i++){
        int temp;
        if(a[i+1]>a[i]){
            temp = a[i+1];
            a[i+1]=a[i];
            a[i] = temp;
        }
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}
}