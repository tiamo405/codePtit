#include <iostream>
using namespace std;

int n;
int cot[20], cheo1[40], cheo2[40];
int dem = 0;

void backtrack(int row) {
    if (row == n) {
        dem++;
        return;
    }

    for (int col = 0; col < n; col++) {
        if (!cot[col] && !cheo1[row - col + n] && !cheo2[row + col]) {
            cot[col] = 1;
            cheo1[row - col + n] = 1;
            cheo2[row + col] = 1;

            backtrack(row + 1);

            cot[col] = 0;
            cheo1[row - col + n] = 0;
            cheo2[row + col] = 0;
        }
    }
}

int main() {
    cin >> n;
    backtrack(0);
    cout << dem;
    return 0;
}
