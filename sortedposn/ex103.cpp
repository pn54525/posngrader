#include <bits/stdc++.h>
using namespace std;
int main(){
    string text;
    int x,co=0,ce=0;
    getline(cin,text);
    stringstream ss(text);
    while (ss>>x){
        if (x%2==0){
            ce+=1;
        }
        else{
            co+=1;
        }
    }
    cout<<"Odd number: "<<co;
    cout<<", Even number: "<<ce;
}