#include <bits/stdc++.h>
using namespace std;
int main(){
    int size[4],max=-999,sum=0;
    cin>>size[0]>>size[1]>>size[2]>>size[3];
    int arr[size[0]][size[1]];
    for (int i=0;i<size[0];i++){
        for (int ii=0;ii<size[1];ii++){
            cin>>arr[i][ii];
        }
    }
    for (int i=0;i<size[0]-size[2]+1;i++){
        for (int ii=0;ii<size[1]-size[3]+1;ii++){
                for (int j=0;j<size[2];j++){
                    for (int jj=0;jj<size[3];jj++){
                        sum+=arr[i+j][ii+jj];
        }
    }
    if (sum>max){
        max=sum;
    }
    sum=0;
        }
    }
    cout<<max;
}