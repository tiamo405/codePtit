#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}
long long chinhphuong(long long n)
{
    long long x = sqrt(n);
    if(x*x == n)
        return x;
    return 0;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long n;
        cin>>n;
        for(int i=2; i<=n;i++)
        {
            long long x = chinhphuong(i);
            if(x!=0 && isPrime(x))
                cout<<i<<' ';
                
        }
        cout<<endl;
        
    }
    
    return 0;
}