#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k,x,y,count=0,counterror=0;
    cin>>n>>k;
    vector<pair<int,int>> step(k);
    for (int i=0;i<k;i++){
        cin>>step[i].first>>step[i].second;
    }
    cin>>x>>y;
    while (x!=y&&counterror!=99){
        for (int i=0;i<k;i++){
            if (x==step[i].first){
                x=step[i].second;
                count++;
            }
        }
        counterror++;
    }
    if (counterror==99){
        cout<<"-1";
        return 0;
    }
    cout<<count;
}