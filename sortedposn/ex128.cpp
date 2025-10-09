#include <bits/stdc++.h>
using namespace std;
int main(){
    string text;
    getline(cin,text);
    stringstream ss(text);
    int x,temp,temp2;
    vector<int> arr,fd;
    while (ss>>x){
        string y=to_string(x);
        arr.push_back(y.length());
    }
    for (int i=0;i<arr.size();i++){
        if (arr[i]>=10){
            fd.push_back(arr[i]/10);
        }
        else{
            fd.push_back(arr[i]);
        }
    }
    for (int i=fd.size()-1;i>=0;i--){
        for (int j=0;j<i;j++){
            if (fd[j]<fd[j+1]){
            temp=fd[j+1];
            fd[j+1]=fd[j];
            fd[j]=temp;
            temp2=arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temp2;
        }}
    }
    for (int i=0;i<arr.size();i++){
        cout<<arr[i];
    }
}