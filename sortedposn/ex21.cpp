#include <iostream>
using namespace std;

int main(){
    int a=0,sum=0,i=0;
    while (a!=-1){
        cin>>a;
        i++;
        sum+=a;
    }
    cout<<(sum+1)/(i-1);
}