#include <bits/stdc++.h>
using namespace std;
bool prime(int n){
    if (n<2)return false;
    for (int i=2;i*i<=n;i++){
        if (n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n,sum=0;
    cin>>n;
    for (int j=2;j<n;j++){
        if (prime(j)){
            sum+=j;
        }
    }
    cout<<sum;
}