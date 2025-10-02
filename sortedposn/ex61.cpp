#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    string text;
    int x,sum=0;
    for (int i=0;i<a;i++){
        cin>>text>>x;
        if (text=="C"){
            if (x==1){
                sum+=5;
            }
            else{
                sum-=2;
            }
        }
        else if (text=="D"){
            if (x==1){
                sum+=10;
            }
        }
        else if(text=="B"){
            if (x==1){
                if (sum>=20){
                    sum+=15;
                }
            }
        }
    }
    cout<<sum;
}