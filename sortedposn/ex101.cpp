#include <bits/stdc++.h>
using namespace std;
int main(){
    string text;
    getline(cin, text);
    int x,max=-999,*ip;
    stringstream ss(text);
    while (ss>>x){
        ip=&x;
        if (max<*ip){
            
            max=*ip;
        }
    }
    cout<<max;
}