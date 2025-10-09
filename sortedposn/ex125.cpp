#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,x,sum=0;
    set<int> n;
    cin>>a;
    for (int i=0;i<a;i++){
        cin>>x;
        n.insert(x);
    }
    for (auto& y :n){
        sum+=y;
    }
    cout<<sum;
}