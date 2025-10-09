#include <bits/stdc++.h>
using namespace std;
int main(){
    int t[2][3];
    for (int i=0;i<2;i++){
        for (int j=0;j<3;j++){
            cin>>t[i][j];
        }
    }
    if (t[0][0]==t[1][0]){
        if (t[0][1]==t[1][1]){
            if (t[0][2]==t[1][2]){
                cout<<"Both teams performed equally";
            }
            else if (t[0][2]<t[1][2]){
                cout<<"Team 1 performed better";
            }
            else {
                cout<<"Team 2 performed better";
            }
        }
        else if (t[0][1]<t[1][1]){
            cout<<"Team 1 performed better";
        }
        else{
            cout<<"Team 2 performed better";
        }
    }
    else if (t[0][1]<t[1][1]){
        cout<<"Team 1 performed better";
    }
    else{
        cout<<"Team 2 performed better";
    }
}