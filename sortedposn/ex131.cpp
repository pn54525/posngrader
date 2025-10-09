#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0,x;
    cin>>n;
    vector<int> arr;
    for (int i=0;i<n*n;i++){
        cin>>x;
        sum+=x;
        arr.push_back(x);
    }
    int y;
    cin>>y;

    cout<<"--- START L1 ---"<<endl;
    cout<<n<<"\nN = "<<n*n<<endl;
    cout<<"--- START L2 ---"<<endl;
    for (int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;}
    cout<<"Sum = "<<sum<<endl; 
    cout<<"--- START L3 ---"<<endl;
    cout<<y<<endl;
    if (y>=0){
        string k=to_string(y);
        cout<<k[k.length()-1]<<" warriors selected";
    }
    else{
        cout<<"10 warriors selected";
    }
}