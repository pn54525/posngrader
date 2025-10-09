#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    int N = S.size();
    vector<vector<int>> dp(N, vector<int>(N, 0));

    // ความยาว 1
    for (int i = 0; i < N; i++) dp[i][i] = 1;

    // substrings ความยาว > 1
    for (int len = 2; len <= N; len++) {
        for (int i = 0; i <= N - len; i++) {
            int j = i + len - 1;
            if (S[i] == S[j]) {
                dp[i][j] = 2;
                if (i + 1 <= j - 1) dp[i][j] += dp[i + 1][j - 1];
            } else {
                dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
            }
        }
    }

    int minDeletions = N - dp[0][N-1];
    cout << "Minimum Deletions: " << minDeletions << endl;
    cout << "(LPS): " << dp[0][N-1] << endl;

    return 0;
}
