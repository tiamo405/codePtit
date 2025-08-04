#include<bits/stdc++.h>
using namespace std;

void VietThuong(string &s)
{
    for(int i=0;i<s.size();i++) s[i] = tolower(s[i]);
}

int main()
{
    ifstream fp1("DATA1.in");
    ifstream fp2("DATA2.in");
    set<string> se, se1, se2;
    string s1,s2;
    while(fp1 >> s1){
       VietThuong(s1);
       se.insert(s1);
       se1.insert(s1);
    }
    while(fp2 >> s2){
       VietThuong(s2);
       se.insert(s2);
       se2.insert(s2);
    }
    for(auto x:se) cout << x << " ";
    cout << endl;
    if (se1.size()>=se2.size()){
        for(string x2:se2){
            for(string x1:se1){
                if(x1==x2) cout << x1 << " ";
            }
        }
    }
    else{
        for(string x1:se1){
            for(string x2:se2){
                if(x2==x1) cout << x2 << " ";
            }
        }       
    }
    fp1.close();
    fp2.close();
}