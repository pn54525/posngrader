#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n;
    vector<vector<int>> mat(n, vector<int>(n));
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cin>>x;
            mat[i][j]=x;
        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout<<mat[j][n-i-1]<<" ";
        }
        cout<<endl;
    }
}