#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int a,b,s,r;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b;
        if(a>b){
           s=a-b;
           r=ceil(s/10.0);
        }
        else if(a<b){
            s=b-a;
            r=ceil(s/10.0);
        }
        else{
            r=0;
        }
        cout<<r<<endl;
        
    }
}