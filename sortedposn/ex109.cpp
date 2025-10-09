#include <bits/stdc++.h>
using namespace std;

int main() {
    string text;
    getline(cin, text);

    int vowel_count = 0;

    auto is_vowel = [](unsigned char c) -> bool {
        c = tolower(c);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    };

    for (auto it = text.cbegin(); it != text.cend(); ++it) {
        if (is_vowel(*it)) vowel_count++;
    }

    cout << vowel_count;
}
