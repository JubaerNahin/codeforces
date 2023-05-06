#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,s,r,tot;
    cin>>k>>r;
    for(int i=1;;i++){
        tot=k*i;
        if(tot%10==0){
            cout<<i;
            break;
        }
        s=tot-r;
        if(s%10==0){
            cout<<i;
            break;
        }
    }
}