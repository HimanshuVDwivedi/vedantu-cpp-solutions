#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int maxLen = 1, curLen = 1;
    for (int i = 1; i < (int)s.size(); i++) {
        if (s[i] == s[i - 1])
            curLen++;
        else
            curLen = 1;
        maxLen = max(maxLen, curLen);
    }
    cout << maxLen << endl;
    return 0;
}
