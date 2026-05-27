#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (long long k = 1; k <= n; k++) {
        long long total = k * k;
        long long allPairs = total * (total - 1) / 2;
        long long attacks = 0;
        if (k >= 3)
            attacks = 4 * (k - 1) * (k - 2);
        cout << allPairs - attacks << "\n";
    }
    return 0;
}
