#include <bits/stdc++.h>
using namespace std;
int main(){
    long long count=0,n;
    cin>>n;
    cout<<"N : "<<n<<endl;
    while(n>1){
        cout<<n<<endl;
        if (n%2==0){
            n/=2;
        }
        else{
            n=n*3+1;
        }
        
        count+=1;
    }
    cout<<"1"<<endl;
    cout<<"Length : "<<count+1;
}