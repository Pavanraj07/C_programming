#include<stdio.h>
int main()
    {
    int j,i,n,flag=0;
    printf("Enter a range: ");
    scanf("%d",&n);
    for(j = 2;j<=n;j++){
         flag = 0;
         for(i=2;i<=j/2;i++){
            if(j % i==0){
                 flag=1;
                 break;
             }
        }
        
         if(flag==0)
             printf("%d ",j);
    }
  
   return 0;
}