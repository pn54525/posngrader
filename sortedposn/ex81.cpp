#include <bits/stdc++.h>
using namespace std;

// ฟังก์ชันตรวจว่าเป็น anagram กันหรือไม่
bool isAnagram(string a, string b) {
    if (a.size() != b.size()) return false;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

int main() {
    string text, findWord, replaceWord;

    // รับข้อความ 1 บรรทัด
    getline(cin, text);
    // รับคำค้นหา
    cin >> findWord;
    // รับคำแทนที่
    cin >> replaceWord;

    stringstream ss(text);
    string word;
    vector<string> result;

    while (ss >> word) {
        string clean = word;

        // ตรวจเฉพาะตัวอักษรเล็กใหญ่ให้เหมือนกัน
        string temp = clean;
        for (auto &c : temp) c = tolower(c);
        string tempFind = findWord;
        for (auto &c : tempFind) c = tolower(c);

        if (isAnagram(temp, tempFind))
            result.push_back(replaceWord);
        else
            result.push_back(word);
    }

    // แสดงผล
    for (int i = 0; i < result.size(); i++) {
        if (i) cout << " ";
        cout << result[i];
    }
}
