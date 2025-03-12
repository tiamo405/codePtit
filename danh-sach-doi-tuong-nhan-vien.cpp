#include <bits/stdc++.h>
using namespace std;
int n = 1;

class NhanVien{
public:
    int id;
    string name, gt, ngsinh, dchi, mso, ngky;
    friend istream &operator>>(istream &in, NhanVien &p)
    {
        p.id = n;
        n++;
        scanf("\n");
        getline(in, p.name);
        in >> p.gt >> p.ngsinh;
        scanf("\n");
        getline(in, p.dchi);
        in >> p.mso >> p.ngky;
        return in;
    }
    friend ostream &operator<<(ostream &out, NhanVien &p)
    {
        if (p.id < 10){
            out << "0000" << p.id << " " << p.name << " " << p.gt << " " << p.ngsinh << " " << p.dchi << " " << p.mso << " " << p.ngky << endl;
        }
        else{
            out << "000" << p.id << " " << p.name << " " << p.gt << " " << p.ngsinh << " " << p.dchi << " " << p.mso << " " << p.ngky << endl;
        }
        return out;
    }
};

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
