#include <bits/stdc++.h>
using namespace std;
int main(){
   int a,b,sum=0,c;
   cin>>a>>b;
    for (int i=0;i<a*b;i++){
        cin>>c;
        sum+=c;
    }
    cout<<sum;

}