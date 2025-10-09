#include <bits/stdc++.h>
using namespace std;
int main(){
     string text;
     getline(cin,text);
     stringstream ss(text);
     int x,*ip;
     while (ss>>x){
        ip=&x;
        cout<<*ip<<" ";
     }
}