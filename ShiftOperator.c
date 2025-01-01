//multiply 2 numbers without  using * operator
#include <stdio.h>

int main()
{
    int a,b,res=0;
    printf("Enter value of a and b:");
    scanf("%d%d",&a,&b);
    while(b>0)
    {
        if(b & 1==1)
            res=res+a;
            a=a<<1;
            b=b>>1;
    }
    printf( "%d",res);

    return 0;
}