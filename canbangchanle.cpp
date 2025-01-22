#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int start = 1;
    for (int i = 1; i < n; i++)
        start *= 10;
    int end = 1;
    for (int i = 1; i <= n; i++)
        end *= 10;
    end -= 1;
    int res[1000000];
    int count = 0;
    for (int i = start; i <= end; i++)
    {
        // check tung so i
        int tmp = i;
        int demc = 0, deml = 0;
        while (tmp > 0)
        {
            int a = tmp % 10;
            if (a % 2 == 0)
                demc++;
            else
                deml++;
            tmp /= 10;
        }
        if (demc == deml)
        {
            res[count] = i;
            count++;
        }
    }
    int countprint = 0;
    for (int i = 0; i < count; i++)
    {
        if(countprint == 10)
        {
            cout << endl;
            countprint = 0;
        }
        cout << res[i] << " ";
        countprint++;
    }
}
