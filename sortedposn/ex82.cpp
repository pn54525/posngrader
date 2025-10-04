#include <bits/stdc++.h>
using namespace std;
int main(){
    string text,hexstr,result;
    getline(cin,text);
    for (int i=0;i<text.length();i++){
        if (text[i]=='%'&&i+2<text.length()){
            hexstr=text.substr(i+1,2);
            char word = (char)stoi(hexstr,nullptr,16);
            result+=word;
            i+=2;
        }
        else{
            result +=text[i];
        }
    }
    cout<<result<<endl;
}