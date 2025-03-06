#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for (int &x:a) cin >> x;
        sort(a,a+n);
        int l=0, r=n-1;
        if (n%2 != 0){
            while(l != r ){
                cout << a[r] << " " << a[l] << " ";
                l++; r--;
            }
            cout << a[l];
        }
        else
            while(l-r != 1){
                cout << a[r] << " " << a[l] << " ";
                l++; r--;
            }
        cout << endl;
    }
}


