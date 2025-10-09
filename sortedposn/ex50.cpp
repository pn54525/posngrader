#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> sales(N);
    for (int i = 0; i < N; i++) cin >> sales[i];

    int maxLen = 1, current = 1;
    for (int i = 1; i < N; i++) {
        if (sales[i] > sales[i - 1])
            current++;
        else
            current = 1;
        maxLen = max(maxLen, current);
    }

    cout << maxLen;
    return 0;
}
