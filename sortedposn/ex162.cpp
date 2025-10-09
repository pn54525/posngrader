#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>=80&&b>=80&&c>=80){
        cout<<"Grand Wizard";
        return 0;
    }
    else if ((a+b+c)/3>=70&&( (a>=75&&b>=75)||(b>=75&&c>=75)||(c>=75&&a>=75))){
        cout<<"Demon Slayer";
    }
    else if (a>90||b>90||c>90){
        cout<<"Special Review";
    }
    else if ((a+b+c)/3<50){
        cout<<"Failed";
    }
    else{
        cout<<"Basic Level";
    }
}