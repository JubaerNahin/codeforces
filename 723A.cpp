#include<bits/stdc++.h>
using namespace std;
int main(){
    int Max,Min,Ma,mid,Mi,x1,x2,x3;
    cin>>x1>>x2>>x3;
    Max= max(x1,x2);
    Min= min(x1,x2);
    Ma= max(Max,x3);
    Mi= min(Min,x3);
    mid= max(Min,x3);
    cout<<(Ma-mid)+(mid-Mi);
}