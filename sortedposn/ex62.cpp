#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    map<int, int> best;  // เก็บคะแนนสูงสุดของแต่ละรหัสข้อสอบ

    for (int i = 0; i < N; i++) {
        int P, S;
        cin >> P >> S;

        if (best.find(P) == best.end()) {
            best[P] = S;  // ข้อใหม่
        } else {
            best[P] = max(best[P], S);  // เอาคะแนนที่มากกว่า
        }
    }

    int total = 0;
    for (auto &x : best) total += x.second;

    cout << total;
    return 0;
}
