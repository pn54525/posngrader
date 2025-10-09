#include <bits/stdc++.h>
using namespace std;
int main(){
    string text;
    cin>>text;
    int n;
    string word,sl;
    cin>>n;
    bool pw=false,ans=true;
    for (int i=0;i<n;i++){
        cin>>word;
        pw=false;
        for (int j=0;j<=text.length()-word.length();j++){
            sl=text.substr(j,word.length());
            if (word==sl){
                pw=true;
                break;
            }
            
        }
        if (!pw){
            ans=false;
        }
        
    }
    cout<<(ans ? "true" : "false");
}