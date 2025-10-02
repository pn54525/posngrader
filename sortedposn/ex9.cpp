#include <bits/stdc++.h>
using namespace std;
int main(){
    int b,a[3],max=-99,min=99;
    
    for (int i=0;i<3;i++){
        cin>>b;
        a[i]=b;
        if (a[i]>max){
            max=a[i];
        }
        if (a[i]<min){
            min=a[i];
        }
    }
    for (int ii=0;ii<3;ii++){
        if (a[ii]!=min&&a[ii]!=max){
            cout<<a[ii];
        }
    }
}