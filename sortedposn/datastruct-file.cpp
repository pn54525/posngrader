 #include <iostream>
 #include <fstream>
 #include <cstring>
 using namespace std;
 int main()
 {
 ofstream myFile("score.txt", ios::out); 
char name[30];
 int score; // เพิ ่มเครื ่ องหมาย ; 
cout << "Enter name and score (type 'exit' as name to stop): " << endl; 
while (true) 
{
 
 cin >> name; 
if (strcmp(name, "exit") == 0) // ถ้าพิมพ์ 'exit' จะหยุดการป้อนข้อมูล
 break;
 cin >> score; // อ่านคะแนน
 myFile << name << '\t' << score << '\n'; // เขียนชื ่ อและคะแนนไปที ่ ไฟล์
}
 myFile.close(); // ปิดไฟล์
 cout << "Data saved successfully." << endl;
 return 0;
 }
