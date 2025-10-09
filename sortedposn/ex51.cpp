#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;
    vector<long long> A(N+1, 0), prefix(N+1, 0);

    for (int i = 1; i <= N; i++) cin >> A[i];

    // คำนวณ prefix sum
    for (int i = 1; i <= N; i++)
        prefix[i] = prefix[i-1] + A[i];

    // เก็บ prefix ที่น้อยที่สุดของแต่ละ mod group
    vector<long long> minPrefix(K, LLONG_MAX);
    minPrefix[0] = 0; // prefix[0] = 0, mod = 0

    long long maxSum = LLONG_MIN;

    for (int i = 1; i <= N; i++) {
        int modVal = i % K;
        if (minPrefix[modVal] != LLONG_MAX) {
            // เจอกลุ่ม mod เดียวกัน => ความยาวหารด้วย K ลงตัว
            maxSum = max(maxSum, prefix[i] - minPrefix[modVal]);
        }
        // ปรับปรุงค่าน้อยสุดของกลุ่มนี้
        minPrefix[modVal] = min(minPrefix[modVal], prefix[i]);
    }

    cout << maxSum;
    return 0;
}
