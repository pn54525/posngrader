#include <bits/stdc++.h>
using namespace std;
int main(){
   int b,a,max=-999,count;
   cin>>a;
   int arr[a];
    for (int i=0;i<a;i++){
        cin>>b;
        arr[i]=b;
        if (b>max){
            max=b;

        }
    }
    for (int i=0;i<a;i++){
        if (arr[i]==max)
        {
            count=i;
            cout<<count;
            return 0;
        }
    }
}