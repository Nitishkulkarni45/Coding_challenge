#include<iostream>
using namespace std;
int main(){
    int lower,upper,sum = 0;
    cin>>lower>>upper;
    for(int i = lower;i<upper+1;i++){
        sum = sum+i;
    }
    cout<<sum;
    return 0;
}