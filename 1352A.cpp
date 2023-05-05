#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,p,s,l,count;
    int n,a;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        a=n;
        count=0;
        for(int i=0;i<5;i++){
           p=n%10;
           s=n/10;
           n=s;
           if(p>0){
            count++;
           }
           if(n<0) break;
      }
      cout<<count<<endl;
      int q;
      for(int i=0;i<5;i++){
           p=a%10;
           q=p*pow(10,i);
           if(q>0)  cout<<q<<" ";
           s=a/10;
           a=s;
           if(a<0) break;
      }
      cout<<endl;
    }
}