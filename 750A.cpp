#include<bits/stdc++.h>
using namespace std;

int main(){
    int s,n,k,sum=0;
    cin>>n>>k;
    s=240-k;
    for(int i=1;i<=n;i++){
        sum+=5*i;
        if(sum>s){
            cout<<i-1<<endl;
            break;
        }
        if(sum==s || i==n){
            cout<<i<<endl;
            break;
        }
    }
}