#include<iostream>
#include <algorithm>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string arrStr[n];
    for(int i = 0; i < n; i++){
        cin >> arrStr[i];
    }
    int s[10] = {0};
    for(int i = 0; i < n; i++){
        for(int j=0;j<arrStr[i].length();j++){
            s[arrStr[i][j]-'0']++;
        }
    }
    for(int i = 0; i < 10; i++){
        if(s[i] > 0){
            cout << i << " ";
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