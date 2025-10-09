#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int mon[n];
    int sum=0,*ip;
    for (int i=0;i<n;i++){
        cin>>mon[i];
    }

    for (int i=0;i<n;i++){
        ip=&mon[i];
        sum+=*ip;
    }
    cout<<sum;
}