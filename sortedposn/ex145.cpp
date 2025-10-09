#include <bits/stdc++.h>
using namespace std;
int main(){
    string tpgl,x;
    int n;
    cin>>tpgl;
    cin>>n;
    string tpmv[n];
    for (int i=0;i<n;i++){
        cin>>x;
        tpmv[i]=x;
    }
    for (int i=0;i<n;i++){
        cout<<"P"<<i+1<<":";
        if(tpmv[i]==tpgl){
            cout<<"S"<<endl;
        }
        else if(tpmv[i].length()<tpgl.length()){
            cout<<"F"<<endl;
        }
        else{
            cout<<"E";
            for (int j=0;j<tpmv[i].length();j++){
                if (tpmv[i][j]!=tpgl[j]){
                    cout<<"(at"<<j+1<<")"<<endl;
                    break;
                }
            }
        }
    }
}