#include <bits/stdc++.h>
using namespace std;
int main(){
    string text,word1,word2;
    cin>>text;
    int n=text.length()/2;
    if (text.length()%2==0){
    for (int i=0;i<=n-1;i++){
        word1+=text[i];
    }
    for (int i=n-1;i<=2*n-1;i++){
        word2+=text[i];
    }
    for (int i=n-1;i>=0;i--){
        cout<<word1[i];
    }
    for (int i=n;i>0;--i){
        cout<<word2[i];
    }}
    else{
        for (int i=0;i<=n-1;i++){
        word1+=text[i];
    }
    for (int i=n+1;i<=2*n;i++){
        word2+=text[i];
    }
    for (int i=n-1;i>=0;i--){
        cout<<word1[i];
    }
    cout<<text[n];
    for (int i=n-1;i>=0;i--){
        cout<<word2[i];
    }}
    }
