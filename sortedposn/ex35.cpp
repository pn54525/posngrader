#include <bits/stdc++.h>
using namespace std;
int main(){
    int b,a,count=0;
    cin>>a;
    for (int i=0;i<a;i++){
        cin>>b;
        if (b%2==0){
            count+=1;
        }
    }
    cout<<count;
}