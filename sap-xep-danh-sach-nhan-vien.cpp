#include<bits/stdc++.h>
using namespace std;

struct NhanVien{
    string ten, gt, ngay, dc, ms, ngayky;
    int ma;
    int d, m, y = 0;
};
int t = 1;
void nhap(struct NhanVien &a)
{
    scanf(" ");
    getline(cin,a.ten);
    cin >> a.gt >> a.ngay;
    scanf(" ");
    getline(cin, a.dc);
    cin >> a.ms >> a.ngayky;
    a.ma = t++;
    a.m = (a.ngay[0] - 48) * 10 + (a.ngay[1] - 48);
    a.d = (a.ngay[3] - 48) * 10 + (a.ngay[4] - 48);
    for (int i = 6; i <= 9; i++){
        a.y = a.y * 10 + (a.ngay[i] - 48);
    }
}

bool dk(NhanVien a, NhanVien b)
{
    if (a.y > b.y) return false;
    if (a.y < b.y) return true;
    if (a.y == b.y) {
        if (a.m > b.m) return false;
        if (a.m < b.m) return true;
        if (a.m == b.m){
            if (a.d >= b.d) return false;
            return true;
        }
    }
}

void sapxep(struct NhanVien ds[], int n)
{
    sort(ds, ds + n, dk);
}

void inds(struct NhanVien A[], int n)
{
    for (int i=0;i<n;i++){
        if (A[i].ma <10){
            cout << "0000" << A[i].ma << " " << A[i].ten << " " << A[i].gt << " " << A[i].ngay << " " << A[i].dc << " " << A[i].ms << " " << A[i].ngayky << endl;
        }
        else{
            cout << "000" << A[i].ma << " " << A[i].ten << " " << A[i].gt << " " << A[i].ngay << " " << A[i].dc << " " << A[i].ms << " " << A[i].ngayky << endl;
        }
    }
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
