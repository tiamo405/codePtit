#include<bits/stdc++.h>
using namespace std;

void VietThuong(string &s)
{
    for(int i=0;i<s.size();i++) s[i] = tolower(s[i]);
}

int main()
{
    ifstream fp("VANBAN.in");
    set<string> se;
    string str;
    while(fp >> str){
        VietThuong(str);
        se.insert(str);
    }
    for(auto x:se){
        cout << x << endl;
    }
    fp.close();
}