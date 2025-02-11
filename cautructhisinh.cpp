#include<iostream>
#include <algorithm>
using namespace std;
void solve(){
    string name, dob;
    float diem1, diem2, diem3;
    cin >> name >> dob >> diem1 >> diem2 >> diem3;
    cout << name << " " << dob << " ";
    printf("%.1f ", diem1 + diem2 + diem3);
}
int main(){
    int t=1;
    // cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
}