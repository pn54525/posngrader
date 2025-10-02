#include <bits/stdc++.h>
using namespace std;
int main(){
    string text;
    cin>>text;
    int count=0;
    char x;
    for (int i=0;i<text.length();i++){
        x=text[i];
        if (x==text[i+1]){
            count+=1;
        }    
        else {
            cout<<count+1<<x;
            count=0;

            }
    
    }
}