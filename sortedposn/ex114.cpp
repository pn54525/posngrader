#include <bits/stdc++.h>
using namespace std;
int main(){
    string text,word="";
    int x=0;
    getline(cin, text);
    for (int i=1;i<=text.size();i++){
        word=text.substr(0, i);
        string rp="";
        while ((int)rp.size()<text.size()){
            rp+=word;
            
        }
        if (rp==text){
            cout<<"["<<word<<" , "<<text.size()/word.size()<<"]";
            return 0;
        }
    }

}