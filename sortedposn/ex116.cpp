#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    vector<vector<int>> normal(a);
    for (int i=0;i<a;i++){
        normal[i].resize(i+1);
        normal[i][0]=normal[i][i]=1;
        for (int ii=1;ii<i;ii++){
            normal[i][ii]=normal[i-1][ii-1]+normal[i-1][ii];
        }
    }
    for (int i=a-1;i>0;i--){
        for (int ii=0;ii<=i;ii++){
            cout<<normal[i][ii]<<" ";
        }
        cout<<"\n";
    }
    cout<<"1";
}