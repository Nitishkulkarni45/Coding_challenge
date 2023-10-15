#include<iostream>
using namespace std;
int main(){
    long n,num,cnt=0;
    cin>>n;
    cin>>num;
    
    while(n){
        int rem = n%10;
        if(rem==num){
            cnt++;
        }
        n = n/10;
    }
    cout<<"The number "<<num<<" has occured "<<cnt<<" times"<<endl;

}