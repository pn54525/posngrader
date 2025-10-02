#include <bits/stdc++.h>
using namespace std;
int main(){
    string text;
    int upper=0,digit=0;
    getline(cin,text);
    for (int i=0;i<text.length();i++){
        if (isupper(text[i])){
            upper+=1;
        }
        if (isdigit(text[i])){
            digit+=1;
        }
    }
    cout<<upper<<endl;
    cout<<digit<<endl;
}