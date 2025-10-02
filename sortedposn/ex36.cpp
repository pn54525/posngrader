#include <bits/stdc++.h>
using namespace std;
int main(){
    int b,a,sum=0,count=0;
    cin>>a;
    int arr[a];
    for (int i=0;i<a;i++){
        cin>>b;
        arr[i]=b;
        sum+=b;
        
    }
    int avg=sum/a;
    for (int i=0;i<a;i++){
        if (arr[i]>avg){
            count+=1;
        }
    }
    cout<<count;
}