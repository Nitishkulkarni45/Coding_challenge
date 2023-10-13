#include <iostream>
using namespace std;
int main()
{
    int n, rev = 0, rem,temp;
    cin >> n;
    temp = n;
    while (n)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    if(rev==temp){
        cout<<"Number is palindrome";
    }
    else{
        cout<<"Number is not palindrome";
    }
    return 0;
}