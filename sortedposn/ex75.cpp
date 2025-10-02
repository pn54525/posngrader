#include <bits/stdc++.h>
using namespace std;
int main(){
    string del;
    cin>>del;
    if (del[0]=='0'){
        if (del.length()==10){
            cout<<"+66 ("<<del[1]<<del[2]<<")"<<" ";
            for (int i=3;i<del.length();i++){
                cout<<del[i];
                if (i==5){
                    cout<<"-";
                }
            }
        }
        else{
            cout<<"Invalid Format";
        }
    }
    else
    {
        cout<<"Invalid Format";
    }
}