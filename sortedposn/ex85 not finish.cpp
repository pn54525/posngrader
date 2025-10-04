#include <bits/stdc++.h>
using namespace std;
string palindrometext(string text){
    int count=0;
    for (int i=0;i<=text.length()/2;i++){
        if (text[i]!=text[text.length()-i]){
                if (text.replace(i,1,"")[i]!=text.replace(i,1,"")[text.replace(i,1,"").length()-i]){
                    text=text.replace(text.length()-i,1,"");
                    count+=1;
        }
                else{
                    text=text.replace(i,i,"");
                    count+=1;
                }
            
        }
    }
    return text;
}
string palindromecount(string text){
    int count=0;
    for (int i=0;i<=text.length()/2;i++){
        if (text[i]!=text[text.length()-i]){
                if (text.replace(i,1,"")[i]!=text.replace(i,1,"")[text.replace(i,1,"").length()-i]){
                    text=text.replace(text.length()-i,1,"");
                    count+=1;
        }
                else{
                    text=text.replace(i,i,"");
                    count+=1;
                }
            
        }
    }
    return count;
}
int main(){
    string text;
    cin>>text;
    cout<<"Minimum Deletions: "<<palindromecount;
    cout<<"Length of Palindromic: "<<palindrometext(text).length();
}