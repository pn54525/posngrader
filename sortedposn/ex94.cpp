#include <bits/stdc++.h>
using namespace std;
int fibonacci(int n){
    if (n==0||n==1)return n;
    return fibonacci(n-2)+(fibonacci(n-1));
}

int main(){
    int n;
    cin>>n;
    vector<int> sequence;
    cout<<"The Fibonacci value of "<<n<<" is: "<<fibonacci(n)<<endl;
    cout<<"Fibonacci sequence up to "<<n<<":";
    for (int i=n;i>0;i--){
        sequence.push_back(fibonacci(i));
    }
    cout<<" 0";
    for (int i=sequence.size();i>0;--i){
        cout<<" "<<sequence[i-1];
    }
    
}