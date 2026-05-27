#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long y, x;
        cin >> y >> x;
        long long layer = max(y, x);
        long long val;
        if (layer % 2 == 0) {
            if (y < x)
                val = layer * layer - (layer - 1) + (layer - y);
            else
                val = (layer - 1) * (layer - 1) + x;
        } else {
            if (x < y)
                val = layer * layer - (layer - 1) + (layer - x);
            else
                val = (layer - 1) * (layer - 1) + y;
        }
        cout << val << "\n";
    }
    return 0;
}
