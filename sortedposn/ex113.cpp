#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int *a = new int[N];
    int *b = new int[N];

    for (int i = 0; i < N; i++) {
        cin >> *(a + i);
    }
    *(b) = *(a);
    *(b + N - 1) = *(a + N - 1);

    for (int i = 1; i < N - 1; i++) {
        *(b + i) = *(a + i - 1) + *(a + i) + *(a + i + 1);
    }

    for (int i = 0; i < N; i++) {
        cout << *(b + i);
        if (i != N - 1) cout << " ";
    }

    delete[] a;
    delete[] b;

    return 0;
}
