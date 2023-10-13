#include <iostream>
using namespace std;
void pos_or_neg(int n)
{
    if (n > 0)
    {
        cout << "Positive" << endl;
    }
    else
    {
        cout << "Negative" << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    pos_or_neg(n);
    return 0;
}