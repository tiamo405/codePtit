#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n >> d;
        int a[n + 5];
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin >> a[i];
        }
        int da[n+5];
        for(int i=0;i<n-d;i++)
        {
            da[i] = a[i+d];
        }
        for(int i=n-d; i<n;i++)
        {
            da[i] = a[i+d-n];
        }
        for(int i=0;i<n;i++)
        {
            cout<<da[i]<<' ';
        }
        cout<<endl;
    }

    return 0;
}