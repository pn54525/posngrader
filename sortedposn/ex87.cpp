#include <bits/stdc++.h>
using namespace std;

string S;
int dp[25][25];
set<string> palSet;

int LPS(int i, int j) {
    if (i > j) return 0;
    if (i == j) return 1;
    if (dp[i][j] != -1) return dp[i][j];

    if (S[i] == S[j])
        return dp[i][j] = 2 + LPS(i + 1, j - 1);
    else
        return dp[i][j] = max(LPS(i + 1, j), LPS(i, j - 1));
}

void build(int i, int j, string left, string right, int len) {
    if (len == 0) {
        palSet.insert(left + right);
        return;
    }
    if (i > j) return;
    if (S[i] == S[j]) {
        if (len == 1) palSet.insert(left + S[i] + right);
        else build(i + 1, j - 1, left + S[i], S[j] + right, len - 2);
    } else {
        if (dp[i + 1][j] >= dp[i][j - 1]) build(i + 1, j, left, right, len);
        if (dp[i][j - 1] >= dp[i + 1][j]) build(i, j - 1, left, right, len);
    }
}

int main() {
    getline(cin, S);
    memset(dp, -1, sizeof(dp));

    int n = S.size();
    int lps = LPS(0, n - 1);
    int deletions = n - lps;

    cout << "Minimum Deletions: " << deletions << "\n";
    cout << "(LPS): " << lps << "\n";

    palSet.clear();
    build(0, n - 1, "", "", lps);

    int idx = 1;
    for (auto &p : palSet) {
        cout << "[" << idx++ << "]: " << p << "\n";
    }
}
