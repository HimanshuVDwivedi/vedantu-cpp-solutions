#include <bits/stdc++.h>
using namespace std;

char board[8][8];
bool colUsed[8], diag1[16], diag2[16];
int ans = 0;

void solve(int row) {
    if (row == 8) { ans++; return; }
    for (int col = 0; col < 8; col++) {
        if (board[row][col] == '*') continue;
        if (colUsed[col] || diag1[row - col + 7] || diag2[row + col])
            continue;
        colUsed[col] = diag1[row - col + 7] = diag2[row + col] = true;
        solve(row + 1);
        colUsed[col] = diag1[row - col + 7] = diag2[row + col] = false;
    }
}

int main() {
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
            cin >> board[i][j];
    solve(0);
    cout << ans << endl;
    return 0;
}
