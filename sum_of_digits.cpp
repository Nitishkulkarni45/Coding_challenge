#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0, temp;
    cin >> n;
    while (n)
    {
        temp = n % 10;
        sum = sum + temp;
        n = n / 10;
    }
    cout<<"Sum is "<<sum<<endl;
    return 0;
}