#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k,x,count=0;
    cin>>n>>k;
    vector<int> itrs;
    for (int i=0;i<n;i++){
        cin>>x;
        itrs.push_back(x);
    }
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (abs(itrs[i]-itrs[j])<=k){
                count+=1;
            }
        }
    }
    cout<<count;
}