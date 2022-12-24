#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,arr[5][5],count=0,n,m;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(arr[i][j]==1){
                if(i>2)
                   i-2=n;
                if(j>2)
                   j-2=m;
                if(i<2)
                   2-i=n;
                if(j<2)
                   2-j=m;
            }
            count=n+m;
            cout<<count;

        }
        cout<<endl;
    }

}
