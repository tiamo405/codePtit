#include <bits/stdc++.h>
using namespace std;

struct ng{
	string ten;
	int d,m,y; //ngay thang nam
};

struct ng ds[100];
void sapxep(int t){
	for(int i=0;i<t-1;i++){
		for(int j=i+1;j<t;j++){
			int a1=ds[i].y,a2=ds[i].m,a3=ds[i].d,b1=ds[j].y,b2=ds[j].m,b3=ds[j].d;
			if((a1>b1)||(a1==b1&&a2>b2)||(a1==b1&&a2==b2&&a3>b3)) swap(ds[i],ds[j]);
		}
	}
}

int main()
{
    int n; cin >> n;
    for (int i=0;i<n;i++){
        cin >> ds[i].ten;
        scanf("%d/%d/%d",&ds[i].d,&ds[i].m,&ds[i].y);
    }
    sapxep(n);
    cout << ds[n-1].ten << endl << ds[0].ten;
}
