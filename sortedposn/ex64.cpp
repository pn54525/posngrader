#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    double avg,sum=0;
    cin>>a;
    int arr[a];
    int n=sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<a;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<"sorting:";
    for (int ii=0;ii<a;ii++){
        cout<<" "<<arr[ii];
        sum+=arr[ii];
    }
    cout<<"\n";
    avg=sum/a;
    cout<<"avg: "<<fixed<<setprecision(2)<<avg;

}