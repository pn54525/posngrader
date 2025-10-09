#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,n,k,count=0;
    cin>>n>>k;
    vector<int> arr(n);
    for (int i=0;i<n;i++){
        cin>>arr[i];
        }
    vector<bool> used(n, false);
    for (int i=0;i<n;i++){
        if (used[i]) continue;
        for (int j=i+1;j<n;j++){
            if (!used[j]&&arr[i]+arr[j]==k){
                used[i]=used[j]=true;
                count+=1;
                break;
            }
        }
    }
    cout<<count;
}