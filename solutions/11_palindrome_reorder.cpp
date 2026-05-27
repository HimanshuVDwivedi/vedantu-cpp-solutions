#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int freq[26] = {};
    for (char c : s) freq[c - 'A']++;

    int oddCount = 0;
    char oddChar = 0;
    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 != 0) {
            oddCount++;
            oddChar = 'A' + i;
        }
    }
    if (oddCount > 1) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    string half = "";
    for (int i = 0; i < 26; i++)
        half += string(freq[i] / 2, 'A' + i);

    string result = half;
    if (oddChar) result += string(freq[oddChar - 'A'] % 2, oddChar);
    reverse(half.begin(), half.end());
    result += half;
    cout << result << endl;
    return 0;
}
