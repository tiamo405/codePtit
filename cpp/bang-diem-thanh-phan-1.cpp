#include<bits/stdc++.h>
using namespace std;

struct BangDiem{
    string masv, hoten, lp;
    float d1,d2,d3;
};

int main()
{
    BangDiem ds[100];
    int n; cin >> n;
    for (int i=0;i<n;i++){
        cin >> ds[i].masv;
        scanf(" ");
        getline(cin, ds[i].hoten);
        cin >> ds[i].lp >> ds[i].d1 >> ds[i].d2 >> ds[i].d3;
    }
    for (int i=0;i<n;i++)
        for (int j=i;j<n;j++) if(ds[i].masv > ds[j].masv) swap(ds[i],ds[j]);
    for (int i=0;i<n;i++){
         cout << i+1 << " " << ds[i].masv << " " << ds[i].hoten << " " << ds[i].lp << " ";
        cout << fixed << setprecision(1) << ds[i].d1 << " " << ds[i].d2 << " " << ds[i].d3<< endl;
    }
}
