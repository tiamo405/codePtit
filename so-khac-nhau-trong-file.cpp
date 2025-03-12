#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
	ifstream iff("DATA.in");
	map<int,int> mp;
	int n;
	while(iff>>n){		
		mp[n]++;
	}
	for(auto it:mp) cout<<it.first<<" "<<it.second<<endl;
	iff.close();
}