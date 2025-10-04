#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    string x;
    vector<int> b;
    cin>>a;
    for (int i=0;i<a;i++){
        cin>>x;
        b.push_back(x[0]);
    }
    sort(b.begin(), b.end());
    for (int y:b){
        cout<<char(y)<<" ";
    }
}