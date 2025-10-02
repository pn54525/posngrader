#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,ans=1,i=1;
    cin>>num;
    while (i<num){
        
        ans=ans*(i+1);
        i++;
    }
    cout<<ans;
}