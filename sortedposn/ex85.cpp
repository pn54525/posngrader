#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    int N = S.size();
    int dp[20][20] = {0}; // S ≤ 20

    // LPS DP
    for (int i = 0; i < N; i++) dp[i][i] = 1;

    for (int len = 2; len <= N; len++) {
        for (int i = 0; i <= N - len; i++) {
            int j = i + len - 1;
            if (S[i] == S[j]) {
                dp[i][j] = 2;
                if (i+1 <= j-1) dp[i][j] += dp[i+1][j-1];
            } else {
                dp[i][j] = max(dp[i+1][j], dp[i][j-1]);
            }
        }
    }

    // สร้าง Palindrome จาก dp table
    int i = 0, j = N-1;
    string left = "", right = "";
    while (i <= j) {
        if (S[i] == S[j]) {
            left += S[i];
            if (i != j) right = S[j] + right;
            i++; j--;
        } else if (dp[i+1][j] > dp[i][j-1]) {
            i++;
        } else {
            j--;
        }
    }

    string palin = left + right;

    cout << "Minimum Deletions: " << N - dp[0][N-1] << endl;
    cout << "Length of Palindromic: " << dp[0][N-1] << endl;

}
