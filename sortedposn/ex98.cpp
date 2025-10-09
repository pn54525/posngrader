#include <bits/stdc++.h>
using namespace std;
int main(){
    string text;
    getline(cin, text);
    stringstream ss(text);
    int x,sum=0;
    int *ip;
    while (ss>>x) {
        ip=&x;
        sum+=*ip;
    }
    cout<<sum;

}