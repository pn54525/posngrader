#include <bits/stdc++.h>
using namespace std;
int main(){
    double n,tp,pi=M_PI,maxarea=-1,maxp=-1;
    vector<double> r;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>tp;
        r.push_back(tp);
    }
    for (int i=0;i<n;i++){
        cout<<"Area of circle "<<i+1<<": "<<fixed<<setprecision(3)<<(r[i]*r[i])*pi<<endl;
        cout<<"Perimeter of circle "<<i+1<<": "<<fixed<<setprecision(3)<<(r[i]*2)*pi<<endl;
        if ((r[i]*r[i])*pi>maxarea){
            maxarea=(r[i]*r[i])*pi;
        }
        if ((r[i]*2)*pi>maxp){
            maxp=(r[i]*2)*pi;
        }
    }
    cout<<"The maximum area is: "<<maxarea<<endl;
    cout<<"The maximum perimeter is: "<<maxp;
}