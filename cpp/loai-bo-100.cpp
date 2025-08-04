#include<bits/stdc++.h>
using namespace std;
void solve(string s){
	int ans = 0;
	for(int i = 0; i < s.length() - 2; i++){
		if(s=="") break;
		if(s[i]=='1' && s[i+1] =='0' && s[i+2]=='0'){
			ans += 3;
			s.erase(i, 3);
			i = -1;
		}
	}
	cout << ans << endl;
}
void TC(){
	string s; cin >> s;
	solve(s);
}


int main(){
	freopen("input.txt","r", stdin);
	freopen("output.txt","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t; cin >> t;
	while(t--){
		TC();
	}
}
