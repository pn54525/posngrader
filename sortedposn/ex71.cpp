#include <bits/stdc++.h>
using namespace std;
int main(){
    int posi;
    string text;
    getline(cin, text);
    posi=text.rfind(".");
    for (int i=0;i<posi;i++){
        cout<<text[i];
    }
    cout<<"\n";
    for(int ii=posi+1;ii<text.length();ii++){
        cout<<text[ii];
    }
}