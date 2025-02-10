#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n * n + 5];
        int res[n + 5][n + 5];
        for (int i = 0; i < n * n; i++)
        {
            /* code */
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
        for (int i = 1; i < n - 1; i++)
        {
            cout << a[i * n];
            for (int j = 1; j <= n - 1 + n - 2; j++)
            {
                cout << " ";
            }
            cout << a[i * n + n - 1] << endl;
        }
        for (int i = n * n - n; i < n * n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
}