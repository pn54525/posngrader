#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,max,x,most=-1;
    cin>>n>>max;
    vector<int> arr;
    for (int i=0;i<n;i++){
        cin>>x;
        arr.push_back(x);
    }
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (arr[i]+arr[j]<=max&&arr[i]+arr[j]>most){
            most=arr[i]+arr[j];
            }
        }
    }
    cout<<most;
}