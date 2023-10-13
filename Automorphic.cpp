#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,sqt,temp,cnt=0;
    cin>>n;
    sqt = pow(n,2);
    temp = n;
    while(temp){
        temp/=10;
        cnt++;
    }
    temp = sqt;
    int val,res;
    res = pow(10,cnt);
    val = temp%res;
    if(val == n){
        cout<<"Auto"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

}