#include <bits/stdc++.h>
using namespace std;
int main(){
   int a,b,count=0,sum=0,avg;
   cin>>a;
   int c[a];
   for (int i=0;i<a;i++){
      cin>>b;
      sum+=b;
      c[i]=b;
      }
   avg=sum/a;
   for (int i=0;i<a;i++){
      if (c[i]>avg){
         count+=1;
      }
   }
   cout<<count;
}