#include<bits/stdc++.h>
using namespace std;

struct ThiSinh{
    string ten, ngaysinh;
    float d1, d2, d3;
};

void nhap(ThiSinh &A)
{
    getline(cin,A.ten);
    cin >> A.ngaysinh >> A.d1 >> A.d2 >> A.d3;
}

void in(ThiSinh A)
{
    cout << A.ten << " " << A.ngaysinh << " " << fixed << setprecision(1) << A.d1+A.d2+A.d3 << endl;
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
