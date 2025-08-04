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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin >> a[i];
        }
        sort(a, a + n);
        int min = a[1] - a[0];
        for (int i = 1; i < n - 1; i++)
        {
            /* code */
            if (a[i + 1] - a[i] < min)
                min = a[i + 1] - a[i];
        }
        cout << min << endl;
    }

    return 0;
}