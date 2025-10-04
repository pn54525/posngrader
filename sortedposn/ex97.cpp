#include <bits/stdc++.h>
using namespace std;
void towerOfHanoi(int n, char a, char b, char c) {
    if (n == 1) {
        cout << "Move crystal ball 1 from tower " << a << " to tower " << c << endl;
        return;
    }
    towerOfHanoi(n - 1, a, c, b);
    cout << "Move crystal ball " << n << " from tower " << a << " to tower " << c << endl;
    towerOfHanoi(n - 1, b, a, c);
}

int main() {
    int n;
    cin >> n;
    towerOfHanoi(n, 'A', 'B', 'C'); 
    return 0;
}
