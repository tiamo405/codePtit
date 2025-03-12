#include <bits/stdc++.h>
using namespace std;
long long n = 1;
class SinhVien{
public:
    long long ma;
    string ten, lop, ngaysinh;
    double diem;
    friend istream &operator>>(istream &in, SinhVien &p)
    {
        p.ma = n;
        n++;
        scanf("\n");
        getline(in, p.ten);
        in >> p.lop >> p.ngaysinh >> p.diem;
        return in;
    }
    void chuanhoa (string &s) // viết hoa chữ cái đầu
    {
        s[0] = toupper(s[0]);
        for (int i=1;i<s.size();i++) s[i] = tolower(s[i]);
    }
    friend ostream &operator<<(ostream &out, SinhVien &p)
    {
        if (p.ngaysinh[2] != '/') p.ngaysinh.insert(0, "0");
        if (p.ngaysinh[5] != '/') p.ngaysinh.insert(3, "0");
        stringstream ss(p.ten);
        vector<string> v;
        string token;
        while(ss>>token) v.push_back(token);
        p.ten = "";
        for (int i=0;i<v.size();i++){
            p.chuanhoa(v[i]);
            p.ten += v[i] + " ";
        }
        if (p.ma < 10){
            out << "B20DCCN00" << p.ma << " " << p.ten << " " << p.lop << " " << p.ngaysinh << " ";
            out << fixed << setprecision(2) << p.diem << endl;
        }
        else{
            out << "B20DCCN0" << p.ma << " " << p.ten << " " << p.lop << " " << p.ngaysinh << " ";
            out << fixed << setprecision(2) << p.diem << endl;
        }
        return out;
    }
};

int dieukien(SinhVien a, SinhVien b)
{
    return a.diem > b.diem;
}
void sapxep(SinhVien ds[], int N)
{
    sort(ds, ds + N, dieukien);
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}


