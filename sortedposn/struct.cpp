#include <bits/stdc++.h>
using namespace std;
struct info{
    string name,city,road;
    int age;

};
void readinfo(info& i){
    cout<<"what's your name"<<endl;
    cin>>i.name;
    cout<<"what your city and road"<<endl;
    cin>>i.city>>i.road;
    cout<<"how old are you"<<endl;
    cin>>i.age;

}
int main(){
    info i;
    readinfo(i);
    cout<<"\n your information: "<<endl;
    cout<<i.name<<endl;
    cout<<i.city<<endl;
    cout<<i.road<<endl;
    cout<<i.age<<endl;
    
}