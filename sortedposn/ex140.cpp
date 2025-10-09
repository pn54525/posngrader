#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,y,l,temp;
    double sum=0,temp2;
    cin>>x>>y;
    vector<double> v;
    vector<int> n;
    for (int i=0;i<x;i++){
        for (int j=0;j<y;j++){
            cin>>l;
            sum+=l;
    }
    v.push_back(sum/y);
    sum=0;

    }
        cout<<"Average scores before sorting:"<<endl;
    for (int i=0;i<v.size();i++){
        n.push_back(i);
        cout<<"c"<<i+1<<": "<<fixed<<setprecision(2)<<v[i]<<endl;
    }
    for (int i=v.size();i>0;i--){
        for (int j=0;j<i;j++){
            if (v[j]<v[j+1]){
                temp2=v[j];
                v[j]=v[j+1];
                v[j+1]=temp2;
                temp=n[j];
                n[j]=n[j+1];
                n[j+1]=temp;
            }
        }
    }
    cout<<"Ranking after sorting:"<<endl;
    for (int i=0;i<v.size();i++){//rank after sort
        cout<<"c"<<n[i]+1<<": "<<fixed<<setprecision(2)<<v[i]<<endl;
    }
}