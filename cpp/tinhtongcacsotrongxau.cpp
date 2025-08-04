#include<iostream>
#include <algorithm>
using namespace std;
void solve(){
    string s;
    cin >> s;
    int sum = 0;
    int tmp = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            tmp = tmp * 10 + (s[i] - '0');
        }
        else
        {
            sum += tmp;
            tmp = 0;
        }
    }
    sum += tmp;
    cout << sum;
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