#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n,m;
        cin>>n>>m;
        int a[n+5][m+5];
        int res[n+5][m+5];
        for (int i = 0; i < n; i++)
        {
            /* code */
            for (int j = 0; j < m; j++)
            {
                /* code */
                cin>>a[i][j];
                res[i][j] = 0;
            }
            
        }
        for (int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if (a[i][j]==1){
                    for (int k=0;k<m;k++){
                        res[i][k]=1;
                    }
                    for (int k=0;k<n;k++){
                        res[k][j]=1;
                    }
                }
            }
        }
        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }

    }
    
}