#include <bits/stdc++.h>
using namespace std;
int main(){
    string text;
    int sum=0,product=1;
    cin>>text;
    vector<int> x;
    for (int i=0;i<text.length();i++){
        if (isdigit(text[i])){
            sum+=text[i]-'0';
            product*=text[i]-'0';
            x.push_back(text[i]);
        }
        
    }
    cout<<"Sum of digits: "<<sum<<endl;
    cout<<"Product of digits: "<<product<<endl;
    cout<<"Number of unique digits: "<<x.size()<<endl;
    for (int y:x){
        cout<<"Digit "<<y-'0'<<": 1 times"<<endl;
    }
}