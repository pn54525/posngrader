#include <bits/stdc++.h>
using namespace std;
string base16(int n){
    int digit,sud=n;
    string ans="",num="0123456789ABCDEF";
    while (sud>=16){
        digit=sud%16;
        sud=sud/16;
        ans=num[digit]+ans;
    }
    digit=sud%16;
        sud=sud/16;
        ans=num[digit]+ans;
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<base16(n);
}