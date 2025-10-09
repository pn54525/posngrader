#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> freq(101, 0); // รหัสโมเดล 1–100

    for (int i = 0; i < N; i++) {
        int M;
        cin >> M;
        freq[M]++;
    }

    for (int i = 1; i <= 100; i++) {
        if (freq[i] >= K) {
            cout << i << ": ";
            for (int j = 0; j < freq[i]; j++)
                cout << "*";
            cout << "\n";
        }
    }

    return 0;
}
