#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    map<int, int> sales_count;

    for (int i = 0; i < N; ++i) {
        int model;
        cin >> model;
        sales_count[model]++;
    }
    vector<int> filtered_models;
    for (auto& entry : sales_count) {
        if (entry.second >= K) {
            filtered_models.push_back(entry.first);
        }
    }
    for (int model : filtered_models) {
        cout << model << ": ";
        for (int i = 0; i < sales_count[model]; ++i) {
            cout << "*";
        }
        cout << "\n";
    }}
