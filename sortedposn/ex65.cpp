#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    double posmed,med;
    int iposmed;
    cin>>a;
    int arr[a];
    int n=sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<a;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<"sort:";
    for (int ii=0;ii<a;ii++){
        cout<<" "<<arr[ii];
    }
    cout<<"\n";
    if (a%2==0){
        med=(arr[a/2]+arr[(a/2)-1])/2.0;
        cout<<"median: "<<fixed<<setprecision(1)<<med;
    }
    else{
        med=arr[(a/2)];
        cout<<"median: "<<fixed<<setprecision(1)<<med;
    }
}