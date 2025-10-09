#include <bits/stdc++.h>
using namespace std;
int main(){
    string text;
    string *ip;
    getline(cin,text);
    transform(text.begin(),text.end(),text.begin(),[](unsigned char c){return toupper(c);});
    ip=&text;
    cout<<*ip;
}