#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		long long n;
		cin >> n;
		long long sum = (1 + n) * n / 2;
		cout << sum << endl;
	}
	return 0;
}