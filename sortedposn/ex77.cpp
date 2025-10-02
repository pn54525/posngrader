#include <bits/stdc++.h>
using namespace std;
int main(){
    string text;
    vector<char> srt;
    getline(cin, text);
    if (isupper(text[0])){
        srt.push_back(text[0]);   
    }
    for (int i=0;i<text.length();i++){
        if (text[i]==' '){
            if (isupper(text[i+1])){
                srt.push_back(text[i+1]);
                text.replace(i,2,"");
                i=0;
            }
        }
        
    }
    for (int ii=0;ii<srt.size();ii++){
        cout<<srt[ii];
    }
}