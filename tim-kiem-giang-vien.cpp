#include<bits/stdc++.h>
using namespace std;

class GiangVien{
    private:
        string ten, bm, ma;
        static int cnt;
    public:
        void nhap();
        void xuat();
        string getTen(){
            return ten;
        }
};

int GiangVien::cnt = 0;
void GiangVien::nhap()
{
    cnt++;
    string s = to_string(cnt);
    if(s.size() < 2) s = "0" + s;
    ma = "GV" + s;
    scanf(" ");
    getline(cin, ten);
    scanf(" ");
    getline(cin, bm);
}

string chuan_hoa(string bm)
{
    string res = "";
    stringstream ss(bm);
    string token;
    while (ss >> token){
        res += toupper(token[0]);
    }
    return res;
}

string getName(string name)
{
    string res, token;
    stringstream ss(name);
    while(ss >> token) res = token;
    return res;
}

void GiangVien::xuat()
{
    cout << ma << " " << ten << " " << chuan_hoa(bm) << endl;
}

bool tim_kiem(string name, string word)
{
    for (char &x:name) x = tolower(x);
    for (char &x:word) x = tolower(x);
    return name.find(word) != string::npos;
}

int main()
{
    int n; cin >> n;
    GiangVien a[n];
    for (int i=0;i<n;i++) a[i].nhap();
    int q; cin >> q;
    while (q--){
        string s; cin >> s;
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s << ":\n";
        for (GiangVien x:a){
            if(tim_kiem(x.getTen(),s)) x.xuat();
        }
    }    
}