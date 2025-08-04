#include<bits/stdc++.h>
using namespace std;

struct NhanVien{
    string ten, gt, ngay, dc, ms, ngayky;
};

void nhap(NhanVien &A)
{
    getline(cin,A.ten);
    cin >> A.gt >> A.ngay;
    scanf(" ");
    getline(cin, A.dc);
    cin >> A.ms >> A.ngayky;
}

void in(NhanVien A)
{
    cout << "00001 " << A.ten << " " << A. gt << " ";
    int n = A.ngay.size();
    if(A.ngay[1]=='/'){
        n++;
        for (int i=n-1;i>=1;i--) A.ngay[i] = A.ngay[i-1];
        A.ngay[0] = '0';
    }
    if(A.ngay[4]=='/'){
        n++;
        for (int i=n-1;i>=3;i--) A.ngay[i] = A.ngay[i-1] ;
        A.ngay[3] = '0';
    }
     for (int i=0;i<n;i++) cout << A.ngay[i];
    cout << " " << A.dc << " " << A.ms << " ";

    int n1 = A.ngayky.size();
    if(A.ngayky[1]=='/'){
        n1++;
        for (int i=n1-1;i>=1;i--) A.ngayky[i] = A.ngayky[i-1];
        A.ngayky[0] = '0';
    }
    if(A.ngayky[4]=='/'){
        n1++;
        for (int i=n1-1;i>=3;i--) A.ngayky[i] = A.ngayky[i-1] ;
        A.ngayky[3] = '0';
    }
     for (int i=0;i<n1;i++) cout << A.ngayky[i];
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
