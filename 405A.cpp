#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n,temp=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        if(arr[i]<arr[j]){
          temp=arr[j];
          arr[j]=arr[i];
          arr[i]=temp;
        }
      }
    }
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
}