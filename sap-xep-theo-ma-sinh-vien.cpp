#include<bits/stdc++.h>
using namespace std;

class SinhVien{
private:
    string ma, ten, lop, email;
public:
    friend ostream& operator << (ostream& out, SinhVien a)
    {
        out << a.ma << " " << a.ten << " " << a.lop << " " << a.email << endl;
        return out;
    }

    friend istream& operator >> (istream& in, SinhVien &a)
    {
        in >> a.ma;
        scanf(" ");
        getline(in, a.ten);
        in >> a.lop >> a.email;
        return in;
    }

    friend bool operator < (SinhVien a, SinhVien b){
        return a.ma < b.ma;
    }
};

int main()
{
    vector<SinhVien> v;
    SinhVien tmp;
    while(cin >> tmp){
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());
    for (SinhVien x:v) cout << x;
}
