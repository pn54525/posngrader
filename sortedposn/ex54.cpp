#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,t,sum=0,c;
    cin>>a>>b;
    int arr[a][b];
    for (int i=0;i<a;i++){
        for (int ii=0;ii<b;ii++){
            cin>>c;
            arr[i][ii]=c;
        }
    }
    cin>>t;
    int arrt[4];

    for (int n=0;n<t;n++){
            for (int i=0;i<4;i++){
        cin>>c;
        arrt[i]=c;
    }
        for (int nn=arrt[0]-1;nn<=arrt[2]-1;nn++){
            for (int nnn=arrt[1]-1;nnn<=arrt[3]-1;nnn++){
                sum+=arr[nn][nnn];

            }
        }
        cout<<sum<<endl;
        sum=0;
    }
}