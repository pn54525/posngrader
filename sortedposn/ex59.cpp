#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,counte=0,max=-999,min=999,count=0;
    cin>>a;
    vector<int> x;
    for (int i=0;i<a;i++){
        cin>>b;
        if (b>0){
            count+=1;
            x.push_back(b);
        }
        if (b%2==0){
            counte+=1;
        }
        if(max<b){
            max=b;
        }
        if(min>b){
            min=b;
        }
    }
    cout<<counte<<endl;
    cout<<a-counte<<endl;
    cout<<max<<endl;
    cout<<min<<endl;
    if (count>0){
    for (int n=0;n<count;n++){
        cout<<x[n]<<" ";
    }}
    else {
        cout<<"NO POSITIVE";
    }
}