#include <iostream>
using namespace std;
int main(){
    int num,sum=1;
    cin>>num;
    while (num>0){
        sum*=num;
        num--;
    }
    cout<<sum;
}