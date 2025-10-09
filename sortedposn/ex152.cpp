#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,h;
    double sum=0,g=9.81;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>m>>h;
        sum+=m*h*g;
    }
    cout<<"Total Gravitational Potential Energy: "<<fixed<<setprecision(2)<<sum<<" J";
}