#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    long long int n,k;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>k;
        if(n%2==0 || n==k){
            cout<<"YES"<<endl;
        }
        else{
                if(k%2==0){
                    cout<<"NO"<<endl;
                }
                else{
                        int s=0;
                    for(int i=1;;i++){
                        s=(n-(2*i));
                        if(s%k==0){
                            cout<<"YES"<<endl;
                            break;
                        }
                        else if(s<1){
                           cout<<"NO"<<endl;
                            break;
                        }
                    }
           }
        }
    }
}