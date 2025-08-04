#include<iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n + 5];
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
        /* code */
    }
    sort(a, a + n);
    for(int i = 0; i < n-1; i++){
        if(a[i] != a[i + 1]){
            cout << a[i] << " ";
        }
    }
    cout<< a[n-1];
    
}