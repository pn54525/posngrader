#include <bits/stdc++.h>
using namespace std;
int tothepowerof(int n,int m){
    if (m==0||n==1)return 1;
    return n*(tothepowerof(n,m-1));
}
int main(){
    int n,m;
    cin>>n>>m;
    cout<<tothepowerof(n,m);
}