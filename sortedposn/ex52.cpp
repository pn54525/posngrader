#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;
    vector<long long> A(N+1), prefix(N+1, 0);
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
        prefix[i] = prefix[i-1] + A[i];
    }

    // dp[i][k] = ค่าสูงสุดเมื่อพิจารณา i ตัวแรกและเลือก k ช่วง
    vector<vector<long long>> dp(K+1, vector<long long>(N+1, LLONG_MIN));
    for (int i = 0; i <= N; i++) dp[0][i] = 0; // เลือก 0 ช่วงได้ 0

    for (int k = 1; k <= K; k++) {
        long long best = LLONG_MIN;
        for (int i = k; i <= N; i++) {
            // ปรับปรุง best ก่อนใช้
            best = max(best, dp[k-1][i-1] - prefix[i-1]);
            dp[k][i] = max(dp[k][i-1], prefix[i] + best);
        }
    }

    cout << dp[K][N];
    return 0;
}
