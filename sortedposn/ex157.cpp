#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k,a,b,count=0;
    cin>>n>>k;
    if (k!=0) cin>>a>>b;
    for (int i=0;i<k-1;i++){
        cin>>a;
        if(a==b){
            count+=1;
        }
        cin>>b;
    }
    if(count==n-2){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}