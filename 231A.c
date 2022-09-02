#include <stdio.h>
int main()
{
    int n,i,j,arr[3],count,output=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
      int count=0;
      for(j=0;j<3;j++){
      scanf("%d",&arr[j]);
       if(arr[j]==1){
        count++;
      }
    
    }
       
       if(count>=2){
          output++;
       }  
  } 
   
      
    printf("%d",output);
    return 0;
}