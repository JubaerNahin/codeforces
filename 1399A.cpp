#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int count=0;
        for(int i=1;i<n;i++){
           if(arr[i]-arr[i-1]>1){
            cout<<"NO"<<endl;
            break;
           }
           count++;
        }
        if(count==n-1) cout<<"YES"<<endl;
        
    }
}
