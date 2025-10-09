#include <bits/stdc++.h>
using namespace std;
int main(){
    string text;
    cin>>text;
    if (text[0]=='0' && text.length()==10){
        for (int i=0;i<10;i++){
            if (i==3){
            cout<<"-";
            cout<<text[i];
            }
            else if (i==6){
                cout<<"-"<<text[i];
            }
            else{
                cout<<text[i];
            }
        }
    }
    else{
        cout<<"Invalid phone number";
    }
}