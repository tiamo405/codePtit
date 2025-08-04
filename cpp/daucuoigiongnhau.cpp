#include<iostream>
#include <algorithm>
using namespace std;
void solve(){
    string s;
    cin>>s;
    int n = s.length();
    int res = n;
    int a[256]={0};
    for(int i = 0; i < n; i++){
        a[int(s[i])]++;
    }
    for(int i=0;i<256;i++){
        if(a[i]>0){
            res+=a[i]*(a[i]-1)/2;
        }
    }
    cout<<res;    
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