#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n<2){
        return false;
    }
    else{
        for(int i=2;i<sqrt(n);i++){
            if(n%i==0){
                return false;
                // break;
            }
        }
        if(true){
            cout<<"Prime"<<endl;
        }
        else{
            cout<<"Non-prime"<<endl;
        }
    }
}