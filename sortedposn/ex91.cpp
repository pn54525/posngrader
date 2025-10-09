#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,x,product=1;
    cin>>a;
    for (int i=0;i<a;i++){
        cin>>x;
        product*=x;
    }
    cout<<"The result is: "<<product;
}