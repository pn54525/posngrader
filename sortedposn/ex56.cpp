#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    
    int degree;
    cin >> degree;

    vector<vector<int>> b(n, vector<int>(n));

    if (degree == 90) {
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                b[j][n - 1 - i] = a[i][j];
    } 
    else if (degree == 180) {
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                b[n - 1 - i][n - 1 - j] = a[i][j];
    } 
    else if (degree == 270) {
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                b[n - 1 - j][i] = a[i][j];
    } 
    else {
        cout << "Invalid rotation degree";
        return 0;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << b[i][j] << " ";
        cout << "\n";
    }

    return 0;
}
