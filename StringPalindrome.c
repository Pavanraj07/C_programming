#include<stdio.h>

int main() {

    char str[100];
    int length=0, i, flag=0;

    printf("Enter a string: ");
    scanf("%s",str);

    for( i=0; str[i]; i++ )
        length++;

    // printf("%d",length);

    for( i=0; i<length/2 ; i++ ){
        if( str[i] == str[length - i -1 ] )
            flag = 1;
    }

    if( flag ? printf("It is a palindrome") : printf("It is not a palindrome"))

    return 0;
}