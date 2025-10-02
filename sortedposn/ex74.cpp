#include <bits/stdc++.h>
using namespace std;
int main(){
    string text;
    int posi=0;
    cin>>text;
    posi=text.find("@");
    if (posi==-1){
        cout<<"Invalid email format.";
        return 0;
    }
    text.replace(posi,1,"\n");
    cout<<text;
}