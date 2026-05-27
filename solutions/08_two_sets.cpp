#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long total = n * (n + 1) / 2;
    if (total % 2 != 0) {
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
    long long target = total / 2;
    vector<int> s1, s2;
    for (long long i = n; i >= 1; i--) {
        if (target >= i) {
            s1.push_back(i);
            target -= i;
        } else {
            s2.push_back(i);
        }
    }
    cout << s1.size() << "\n";
    for (int x : s1) cout << x << " ";
    cout << "\n" << s2.size() << "\n";
    for (int x : s2) cout << x << " ";
    cout << endl;
    return 0;
}
