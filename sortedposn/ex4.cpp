#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if (n>0){
        cout<<"positive";
        return 0;
    }
    else if (n==0){
        cout<<"zero";
        return 0;
    }
    else if (n<0){
        cout<<"negative";
        return 0;
    }
}