#include<iostream>
using namespace std;
int factor(int n){
if(n==0){
    return 1;
}
else{
    return n*factor(n-1);
}
}
int main(){
    int n;
    cin>>n;
    int result = factor(n);
    cout<<result<<endl;
    return 0;
}