#include <bits/stdc++.h>
using namespace std;
int main(){
    string text;
    getline(cin,text);
    stringstream ss(text);
    int x,sum=0;
    while (ss>>x){
        sum+=x;
    }
    cout<<"Sum of all values: "<<sum;
}