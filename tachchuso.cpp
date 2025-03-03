#include <iostream>
#include <algorithm>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    char a[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = s[i];
    }
    sort(a, a + n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= '0' && a[i] <= '9')
        {
            sum += a[i] - '0';
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (!(a[i] >= '0' && a[i] <= '9'))
        {
            cout << a[i];
        }
    }
    cout << sum;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
}