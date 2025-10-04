#include <bits/stdc++.h>
using namespace std;
int main(){
    string text,word;
    getline(cin,text);
    cin>>word;
    int posi=text.find(word);
    while (posi!=string::npos){
        text.replace(posi,word.length(), string(word.length(),'*'));
        posi=text.find(word,posi+word.length());}
    cout<<text;
}