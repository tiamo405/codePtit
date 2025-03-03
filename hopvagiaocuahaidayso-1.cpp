#include<iostream>
#include <algorithm>
using namespace std;
void solve(){
    int n,m;
    cin >> n >> m;
    int a[n+m], b[m+n];
    if (n > m)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
        }
    }
    
    // hop cua 2 day so
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            cout << a[i] << " ";
            i++;
        }
        else if (a[i] > b[j])
        {
            cout << b[j] << " ";
            j++;
        }
        else
        {
            cout << a[i] << " ";
            i++;
            j++;
        }
    }
    while (i < n)
    {
        cout << a[i] << " ";
        i++;
    }
    while (j < m)
    {
        cout << b[j] << " ";
        j++;
    }
    // giao cua 2 day so
    cout << endl;
    i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            i++;
        }
        else if (a[i] > b[j])
        {
            j++;
        }
        else
        {
            cout << a[i] << " ";
            i++;
            j++;
        }
    }


}
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
}