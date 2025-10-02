#include <bits/stdc++.h>
using namespace std;
int main(){
    int b,a,min=-999;
    cin>>a;
    for (int i=0;i<a;i++){
        cin>>b;
        if (b>min){
            min=b;
        }
    }
    cout<<min;
}