#include <bits/stdc++.h>
using namespace std;

int main() {
    string line;
    if (!getline(cin, line)) return 0;
    if (line.size() > 100) line = line.substr(0, 100);

    unordered_set<char> uniq;

    const char* p = line.c_str();

    while (*p != '\0') {  
        if (isalpha(*p)) {
            char lower = tolower(*p);
            if (lower >= 'a' && lower <= 'z') {
                uniq.insert(lower);
            }
        }
        p++; 
    }

    cout << uniq.size() << '\n';

    return 0;
}
