#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,ppt=0,pct=0,ppn=0,tpt,tct,tpn;
    cin>>a;
    int b[3];
    for (int i=0;i<a;i++){
        cin>>tpn>>tpt>>tct;
        ppt+=tpt;
        pct+=tct;
        ppn+=tpn;
    }
    b[2]=ppn;
    b[1]=ppt;
    b[0]=pct;
    int n=sizeof(b)/sizeof(b[0]);
    sort(b,b+n);
    cout<<"Peanut: "<<ppn<<endl;
    cout<<"Pete: "<<ppt<<endl;
    cout<<"Chertam: "<<pct<<endl;

    if (b[0]==b[1]){
            cout<<"Winner: Peanut & Pete & Chertam Score: "<<ppt;
    }
    else if(b[1]==b[2]){
        if (ppn==b[0]){
            cout<<"Winner: Pete & Chertam Score: "<<pct;
        }
        else if (ppt==b[0]){
            cout<<"Winner: Peanut & Chertam Score: "<<pct;
        }
        else if (pct==b[0]){
            cout<<"Winner: Peanut & Pete Score: "<<ppt;
        }
    }
    else {
        if (ppn==b[2]){
            cout<<"Winner: Peanut Score: "<<ppn;
        }
        else if (ppt==b[2]){
            cout<<"Winner: Pete Score: "<<ppt;
        }
        else if (pct==b[2]){
            cout<<"Winner: Chertam Score: "<<pct;
        }
    }

}