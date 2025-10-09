#include <bits/stdc++.h>
using namespace std;
int main(){
    string text;
    getline(cin,text);
    stringstream ss(text);
    int x,*ip,sum=0,count=0;
    while (ss>>x){
        ip=&x;
        sum+=*ip;
        count+=1;
    }
    cout<<sum/count;
}