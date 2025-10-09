#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;
    int n = a * 2 - 1;

    //ด้านบน
    for (int i = 0; i <= a/2; i++) {
        // ช่องว่างด้านซ้าย
        for (int j = 0; j < (a/2 - i); j++) cout << " ";
        // ดาวด้านซ้าย
        for (int j = 0; j < 2*i + 1; j++) cout << "*";
        // ช่องว่างกลาง
        for (int j = 0; j < a - (2*i + 1)+1; j++) cout << " ";
        // ดาวด้านขวา
        for (int j = 0; j < 2*i + 1; j++) cout << "*";
        cout << "\n"; 
    }
    for (int i=0;i<a*2+1;i++){
        cout<<"*";
    }
    cout<<"\n";
 
    // ด้านล่าง
    for (int i = 0; i <= a; i++) {
        for (int j = 0; j-1< i; j++) cout << " ";
        for (int j = 0; j < n - 2*i; j++) cout << "*";
        cout << "\n";
    }
}
