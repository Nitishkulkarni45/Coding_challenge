#include<iostream>
using namespace std;
int main(){
    int n,temp,sum=0;
    cin>>n;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            temp = i;
            sum = sum+i;
        }
    }
    if(sum == n){
        cout<<"Perfect"<<endl;
    }
    else{
        cout<<"Not perfect"<<endl;
    }

}