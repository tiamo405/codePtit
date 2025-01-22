#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;
    return true;
}
int main()
{
    long a,b,l,r;
    cin >> a >> b;
    l = min(a,b);
    r = max(a,b);
    for (int i = l; i <= r; i++)
        if (isPrime(i))
            cout << i << " ";
}