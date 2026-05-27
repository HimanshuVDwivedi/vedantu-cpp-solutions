#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    for (long long p = 5; p <= n; p *= 5)
        count += n / p;
    cout << count << endl;
    return 0;
}
