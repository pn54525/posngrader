#include <bits/stdc++.h>
using namespace std;
int main(){
    string text;
    getline(cin,text);
    stringstream s(text);
    int sum=0,x,count=0,countans=0;
    double avg;
    vector<int> a;
    while (s>>x){
        a.push_back(x);
        sum+=x;
        count+=1;
    }
    avg=sum/count; 
    for (int i=0;i<count;i++){
        if (a[i]>avg){
            countans+=1;
        }
    }
    cout<<countans;  
}