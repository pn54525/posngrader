#include <bits/stdc++.h>
using namespace std;
int main(){
    string text;
    getline(cin,text);
    stringstream ss(text);
    int x,sum=0,*ip;
    while (ss>>x){
        ip=&x;
        if (*ip%2==0){
        sum+=*ip;}
    }
    cout<<sum;
}