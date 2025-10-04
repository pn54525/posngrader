#include <bits/stdc++.h>
using namespace std;
int main(){
    string text;
    getline(cin,text);
    text.erase(remove(text.begin(),text.end(),' '), text.end());
    for (int i=0;i<text.length();i++){
        text[i]=tolower(static_cast<char>(text[i]));
    }
    for (int i=0;i<text.length()/2;i++){
        if (text[i]!=text[text.length()-i-1]){
            cout<<"NO";
            return 0;
        }       
    }
    cout<<"YES";
}