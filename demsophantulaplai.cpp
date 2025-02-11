#include<iostream>
#include <algorithm>
using namespace std;
void solve(){
    int n, dem = 0, temp;
    bool isSame = false;
    cin >> n;
    int a[n + 5];
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
        /* code */
    }
    sort(a, a + n);
    temp = a[0];
    for(int i = 1; i < n; i++){
        if (a[i] == temp){
            dem++;
            isSame = true;
        }
        else{
            temp = a[i];
            if(isSame){
                dem++;
                isSame = false;
            }
        }
    }
    if (isSame)
    {
        dem++;
        /* code */
    }
    
    cout << dem;
    
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