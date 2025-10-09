#include <bits/stdc++.h>
using namespace std;
int line(int n){
    if (n==0)return 0;
    cout<<"*";
    return line(n-1);
}
int star(int n,int i=1){
    if (i>n){
        return 0;
    }
    line(i);
    cout<<"\n";
    return star(n, i+1);
}
int main(){
    int n;cin>>n;
    star(n);
}