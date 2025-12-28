#include <iostream>
#include <string>
using namespace std;

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    string S1, S2;
    cin >> S1;
    cin >> S2;

    int n = S1.length();
    int m = S2.length();

    int dp[1001][1001];

    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= m; j++)
            dp[i][j] = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (S1[i - 1] == S2[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    cout << dp[n][m];
    return 0;
}
