#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k,cn=0,count=0,max=-1;
    cin>>n>>k;
    vector<int> arr(n);
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i=0;i<n;i++){
        count=0;
        cn=0;
        for (int j=i;j<n;j++){
        count+=arr[j];
        cn+=1;
        if(count>k){
            count=0;
            cn=0;
        }
        if (cn>max){
            max=cn;
        }
    }}
    cout<<max;
}