#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n,greater<int>());
    int sum=0,half;
    for(int i=0;i<n;i++){
        sum+=a[i]; 
    }
    half=ceil(sum/2);
    sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(sum>half){
            cout<<i+1;
            break;
        }
    }
}