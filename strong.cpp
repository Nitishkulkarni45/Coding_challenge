#include<iostream>
using namespace std;
int fact(int rem){
    if(rem == 0){
        return 1;
    }
    else if(rem == 1){
        return 1;
    }
    else{
        return rem * fact(rem-1);
    }
}
int main(){
    int n,temp,summ = 0,rem;
    cin>>n;
    int val;
    temp = n;
    while(n){
        rem = n%10;
        val = fact(rem);
        // cout<<val<<endl;
        summ = summ + val;
        n = n/10;
    }
    if(summ == temp){
        cout<<"Number is strong"<<endl;
    }
    else{
        cout<<"Its not";
    }

}