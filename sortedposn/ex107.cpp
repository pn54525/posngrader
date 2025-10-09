#include <bits/stdc++.h>
using namespace std;
int main(){
    string text;
    getline (cin,text);
    stringstream ss(text);
    int x,count=0,temp,*ip;
    vector<int> a;
    while (ss>>x){
        ip=&x;
        count +=1;
        a.push_back(*ip);
    }
    a.insert(a.begin(),a[count-1]);
    a.pop_back();

    for (int i=0;i<count;i++){
        cout<<a[i]<<" ";
    }
}