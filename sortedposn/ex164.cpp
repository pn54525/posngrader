#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x,max=-1,water=0,count=0;
    cin>>n;
    vector<int> h;
    vector<int> num;
    for (int i=0;i<n;i++){
        cin>>x;
        h.push_back(x);
        if (x>max){
            max=x;
        }
    }
    while(max>0){
        num.clear();
        count=0;
        for (int j=0;j<n;j++){
            if (max<=h[j]){
                count+=1;
                num.push_back(j);
            }
        }
        if (count!=0){
        for(int j=0;j<count-1;j++){
            water+=num[j+1]-num[j]-1;
        }
    }max--;}
    cout<<water;
}