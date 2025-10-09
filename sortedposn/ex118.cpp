#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,a,count=0;
    cin>>a;
    vector<int> n(a);
    for (int i=0;i<a;i++){
        cin>>x;
        n[i]=x;
    }
    for (int i=0;i<a;i++){
        for (int j=i+1;j<a;j++){
            bool temp=true;
            for (int o=i+1;o<j;o++){
                double y=n[i]+(n[j]-n[i])*(double)(o-i)/(j-i);
                if (n[o]>y){
                    temp=false;
                    break;
                }
            }
            if (temp){
                count+=1;
            }   
        }
    }
    cout<<count;
}