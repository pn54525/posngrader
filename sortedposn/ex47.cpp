#include <bits/stdc++.h>
using namespace std;
int main(){
   int a,b,sum=0,c,max=-99;
   cin>>a>>b;
   int arr[a];
    for (int i=0;i<a;i++){
        for (int ii=0;ii<b;ii++){
            cin>>c;
            if (c>max){
               max=c;
            }

        }
        arr[i]=max;
        max=-999;
    }
    for (int i=0;i<a;i++){
       cout<<arr[i]<<" ";
    }

}