#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,a,count=0,sum=0;
    cin>>a;
    for (int i=0;i<a;i++){
        cin>>x;
        if (x>100||x<10){
            count+=1;        
        }
        else{
            sum+=x;
        }
    }
    cout<<count<<" "<<sum;
}