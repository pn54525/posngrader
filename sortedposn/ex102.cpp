#include <bits/stdc++.h>
using namespace std;
int main(){
    string text;
    getline(cin, text);
    stringstream ss(text);
    int x,*ip,count=0;
    vector<int> a;
    while (ss>>x){
        ip=&x;
        a.push_back(*ip);
        count+=1;
    }
    for (int i=count;i>0;i--){
        cout<<a[i-1]<<" ";
    }
}