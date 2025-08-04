#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        char a;
        cin >> a;
        if (int(a) >= 97 && int(a) <= 122)
        {
            cout<<char(int(a)-32)<<endl;
        }
        else
        {
            cout<<char(int(a)+32)<<endl;
        }
    }
    return 0;
}