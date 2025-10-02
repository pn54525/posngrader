#include <bits/stdc++.h>
using namespace std;
int main(){
    int sum;
    cin>>sum;

    if (sum>=80){
        cout<<"A";
    }

    else if (sum>=70){
        cout<<"B";
    }
    else if (sum>=60){
        cout<<"C";
    }

    else if (sum>=50){
        cout<<"D";
    }
    else {
        cout<<"F";
    }
}
