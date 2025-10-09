#include <bits/stdc++.h>
using namespace std;

bool isLeap(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    string date;
    cin >> date;

    // ตรวจสอบรูปแบบ YYYY-MM-DD (ต้องมีขนาด 10 ตัว)
    if (date.size() != 10 || date[4] != '-' || date[7] != '-') {
        cout << "Invalid date.";
        return 0;
    }

    string y_str = date.substr(0, 4);
    string m_str = date.substr(5, 2);
    string d_str = date.substr(8, 2);

    // ตรวจสอบว่าเป็นตัวเลขทั้งหมด
    if (!all_of(y_str.begin(), y_str.end(), ::isdigit) ||
        !all_of(m_str.begin(), m_str.end(), ::isdigit) ||
        !all_of(d_str.begin(), d_str.end(), ::isdigit)) {
        cout << "Invalid date.";
        return 0;
    }

    int y = stoi(y_str);
    int m = stoi(m_str);
    int d = stoi(d_str);

    // ตรวจสอบเดือน
    if (m < 1 || m > 12) {
        cout << "Invalid month.";
        return 0;
    }

    // จำนวนวันในแต่ละเดือน
    int daysInMonth[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    if (isLeap(y)) daysInMonth[2] = 29;

    // ตรวจสอบวัน
    if (d < 1 || d > daysInMonth[m]) {
        cout << "Invalid Day.";
        return 0;
    }

    // แสดงผลลัพธ์ในรูปแบบ DD/MM/YYYY
    cout << setw(2) << setfill('0') << d << "/"
         << setw(2) << setfill('0') << m << "/"
         << y;
}
