#include <bits/stdc++.h>
using namespace std;
int main(){
    string text;
    char x;
    getline(cin,text);
    vector<char> isa;
    for (int i=0;i<text.length();i++){
        if(isalpha(text[i])){
            x=tolower(text[i]);
            isa.push_back(x);
        }
    }
    for (int i=0;i<isa.size();i++){
        if (isa[i]!=isa[isa.size()-i-1]) {
            cout<<"NO";
            return 0;
        } 
    }
    cout<<"YES";
}