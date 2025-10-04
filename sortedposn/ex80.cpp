#include <bits/stdc++.h>
using namespace std;

int main(){
    string text;
    int posip=0,posim=0,posimi=0,posis=0;
    double ans;
    getline(cin,text);
    posip=text.find("+");
    posim=text.find("*");
    posimi=text.find("-");
    posis=text.find("/");
    if (posip!=string::npos){
        ans=stod(text.substr(0,posip))+stod(text.substr(posip+1));
    }
    else if (posim!=string::npos){
        ans=stod(text.substr(0,posim))*stod(text.substr(posim+1));
    }
    else if (posimi!=string::npos){
        ans=stod(text.substr(0,posimi))-stod(text.substr(posimi+1));
    }
    else if (posis!=string::npos){
        ans=stod(text.substr(0,posis))/stod(text.substr(posis+1));
    }
    cout<<fixed<<setprecision(2)<<ans;
    }