#include<stdio.h>
int main()
    {
    int j,i,n,m,flag=0;
    printf("Enter starting range: ");
    scanf("%d",&m);
    printf("Enter ending range: ");
    scanf("%d",&n);
    for(j = m;j<=n;j++){
         flag = 0;
         for(i=2;i*i<=j;i++){
            if(j % i==0){
                 flag=1;
                 break;
             }
        }
        
         if(flag==0)
             printf("%d\t",j);
    }
  
   return 0;
}