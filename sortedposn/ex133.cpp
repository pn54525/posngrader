#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x,ans;
    cin>>n;
    vector<int> a;
    vector<int> y(n,0);
    for (int i=0;i<n;i++){
        cin>>x;
        a.push_back(x);
    }
    for (int i=1;i<a.size();i++){
        for (int j=0;j<i;j++){
            if (a[i]==a[j]){
                y[i]+=1;
                y[j]+=1;
            }
        }
    }
    cout<<n<<endl;
    for (auto& k : a){
        cout<<k<<" ";
    }
    cout<<endl;
    for (int i=0;i<a.size();i++){
        if (y[i]==0){
            cout<<"The Solitary Number is "<<a[i];
        }
    }
}