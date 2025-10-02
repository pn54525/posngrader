#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,count=0,temp;
    cin>>a;
    int x[a];
    for (int i=0;i<a;i++){
        cin>>x[i];
    }
    for (int i=a-2;i>=0;i--){
        for (int j=0;j<=i;j++){
            if (x[j]>x[j+1]){
                temp=x[j];
                x[j]=x[j+1];
                x[j+1]=temp;
                count+=1;
            }
        }
    }
    cout<<count;
}