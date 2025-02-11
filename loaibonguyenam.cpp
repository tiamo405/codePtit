#include<iostream>
#include <algorithm>
using namespace std;
void solve(){
    char nguyenAm[6] = {'a', 'e', 'i', 'o', 'u', 'y'}; 
    string s;
    cin>>s;
    int n = s.length();
    // convert to lower string
    for(int i = 0; i < n; i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] += 32;
        }
    }
    for(int i = 0;i < n; i++){
        for(int j = 0; j < 6; j++){
            if(s[i] == nguyenAm[j]){
                s.erase(i, 1);
                i--;
                n--;
                break;
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout << "." << s[i];
    }

}
int main(){
    int t=1;
    // cin >> t;
    while (t--)
    {
        solve();
        // cout << endl;
    }
}