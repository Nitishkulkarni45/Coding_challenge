#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,temp,cnt=0,sum=0,s;
    cin>>n;
    temp = n;
    s = n;
    while(temp){
        int rem;
        rem = temp%10;
        cnt++;
        temp = temp/10;
    }
    while(n){
        int rem;
        rem = n%10;
        sum = sum+pow(rem,cnt);
        n = n/10;
    }
    if(s == sum){
        cout<<"It is an armstrong"<<endl;
    }
    else{
        cout<<"Its not"<<endl;
    }
}