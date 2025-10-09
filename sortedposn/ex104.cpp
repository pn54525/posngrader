#include <bits/stdc++.h>
using namespace std;
int main(){
    string n,text;
    getline(cin,text);
    cin>>n;
    int posi=text.find(n);
    if (posi>=0){
        cout<<"Index : "<<posi/2;
    }
    else{
        cout<<"Index : -1";
    }
}