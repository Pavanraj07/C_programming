#include <stdio.h>
int *rev(char *p)
{
    static char a[100];
    static int i;
    
    if(*p)
    {
        rev(p+1);
        a[i++]=*p;
    }

    return a;
}
void main()
{
    char str[100];
    printf("Enter a string:");
    scanf("%[^\n]s",str);
    printf("Reversed string is:%s",rev(str));
}
