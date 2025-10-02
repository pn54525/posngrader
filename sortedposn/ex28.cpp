#include <iostream>
using namespace std;
int main(){
    int a,sum=0,b;
    cin>>a;
    b=a/2;
    b=b*(b+1);
    for (int i=1;i<=a;){
        
        sum+=i;
        i+=2;
    }
    
    cout<<b-sum;
}