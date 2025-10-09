#include <bits/stdc++.h>
using namespace std;
int main(){
    string text;
    getline(cin,text);
    stringstream ss(text);
    double sum=0, x;
    int count=0; 
    while (ss>>x){
        count+=1;
        sum+=x;
    }
    cout<<fixed<<setprecision(1)<<sum<<endl;
    cout<<count<<endl;
    if (count!=0){
    cout<<fixed<<setprecision(1)<<sum/count;
}else{
    cout<<"0.0";
}}