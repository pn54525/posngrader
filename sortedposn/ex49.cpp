#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,sumo=0,sume=0;
    cin>>a;
    vector<int> x;
    for (int i=0;i<a;i++){
        cin>>b;
        x.push_back(b);
        if ((i+1)%2==0){
            sumo+=b;
        }
        else{
            sume+=b;
        }
    }
    if (sume>sumo){
        cout<<sume;
    }
    else{
        cout<<sumo;
    }
}