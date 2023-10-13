#include <iostream>
using namespace std;
int eveorodd(int n)
{
    if (n % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n;
    cin >> n;
    int s = eveorodd(n);
    if (s == true)
    {
        cout << "EVEN";
    }
    else
    {
        cout << "ODD";
    }
}