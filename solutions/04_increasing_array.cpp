#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long moves = 0, prev = 0;
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        if (x < prev)
            moves += prev - x;
        else
            prev = x;
    }
    cout << moves << endl;
    return 0;
}
