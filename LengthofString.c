#include<stdio.h>

int lengthOfString( char *p )
{
    if( *p == '\0' )
        return 0;
    else
        return 1 + lengthOfString(p+1);  
}

int main()
{
    char str[100];
    printf("Enter String: ");
    scanf("%[^\n]s",str);

    printf("%d",lengthOfString(str));

    return 0;
}   