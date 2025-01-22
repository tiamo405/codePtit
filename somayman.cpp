#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int socuoi = 0;
        socuoi = n%10;
        n/=10;
        socuoi = (n%10)*10 + socuoi;
        if(socuoi ==86) printf("1\n");
        else printf("0\n");
    }
    
    return 0;
}