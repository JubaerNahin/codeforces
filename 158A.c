#include <stdio.h>
int main()
{
    int i,n,k,count=0;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(i=0;i<n;i++){
      scanf("%d",&arr[i]);
    
    }
    for(i=0;i<n;i++){
       
      if(arr[i]>=arr[k-1] && arr[k-1]>0){
        
        count++;
      
      }
      else if(arr[i]>arr[k-1]){
        count++;
      }
    }
    printf("%d",count);
    return 0;
}