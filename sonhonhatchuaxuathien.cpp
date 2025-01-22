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
        int n;
        cin >> n;
        int a[n+5];
        int dd[1000005] = {};
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin >> a[i];
            if(a[i] > 0)
                dd[a[i]] = 1;
        }
        for(int i=1;i<=1000000;i++)
        {
            if(dd[i] == 0)
            {
                cout<<i<<endl;
                break;
            }
        }
    }

    return 0;
}