#include<stdio.h>

int FindChar(char  str[], char chr, int i )
{

    if(str[i] == '\0')
        return -1;

    if( str[i] == chr )
        return i;

    return FindChar(str, chr, i+1);
}

int main()
{

    char str[100];
    char chr;
    int i=0;

    printf("Enter a string: ");
    scanf("%[^\n]s",str);

    while( getchar() != '\n' );

    printf("Enter a character ");
    scanf("%c",&chr);

    int index = FindChar( str, chr, i );

    if( index != -1 )
        printf("Character found at index %d",index);
    else
        printf("String Not found");

    return 0;
}