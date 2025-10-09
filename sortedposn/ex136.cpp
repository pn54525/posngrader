#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,y,n,posimed,max=-999;
    cin>>x>>y;
    double sum=0,med;
    vector<vector<int>> mat(x,vector<int>(y));
    vector<int> st;

    for (int i=0;i<x;i++){
        for (int j=0;j<y;j++){
            cin>>n;
            mat[i][j]=n;
            st.push_back(n);
            sum+=n;
        }
    }
    sort(st.begin(),st.end());
    if ((x*y)%2==1){
        med=st[x*y/2];
    }
    else{
        med=(st[x*y / 2 - 1] + st[x*y / 2]) / 2.0;
    }
    cout<<"Average Power: "<<fixed<<setprecision(2)<<(sum/(x*y))<<endl;
    cout<<"Median Power : "<<fixed<<setprecision(2)<<med<<endl;
    cout<<"Values > avg :";
    for (int i=0;i<x*y;i++){
            
                if (st[i]>max){
                    max=st[i];
                }
                if (st[i]>(sum/(x*y))){
                    cout<<" "<<st[i];
                }

            
        }
    cout<<endl;
    cout<<"\nType Map:"<<endl;
    for (int i=0;i<x;i++){
            for (int j=0;j<y;j++){
                if (j==0||j==y-1||i==0||i==x-1){
                    cout<<"0 ";
                }
                else{
                    if (mat[i][j]==max){
                        cout<<"h ";
                    }
                    else if(mat[i][j]==0){
                        cout<<"z ";
                    }
                    else if (mat[i][j]>0){
                        cout<<"p ";
                    }
                    else {
                        cout<<"n ";
                    }
                    }
                }
            cout<<endl;
        }
    }
