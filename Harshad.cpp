#include<iostream>
using namespace std;
int main(){
    int n,sum=0,temp;
    cin>>n;
    temp = n;
    while(temp){
        int rem = temp%10;
        sum = sum + rem;
        temp = temp/10;
        
    }
    if(n%sum==0){
        cout<<"Harshad"<<endl;
    }
    else{
        cout<<"Its Not"<<endl;
    }
}