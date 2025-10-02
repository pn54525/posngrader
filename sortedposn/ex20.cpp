#include <iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    if (a%2==0){
        cout<<"e: "<<a/2<<",o: "<<a/2;
    }
    else {
        cout<<"e: "<<a/2<<",o: "<<(a/2)+1;
    }
}