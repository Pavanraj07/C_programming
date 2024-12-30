#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100], str2[100];
    int count[100] = {0};
    int i;
    printf("Enter the first string: ");
    scanf("%[^\n]s",str1);

    while( getchar() != '\n' );

    printf("Enter the second string: ");
    scanf("%[^\n]s",str2);

    if(strlen(str1) != strlen(str2)){
        printf("Not an Anagram");
        return 0;
    }

    for( i=0; str1[i]; i++ )
    {
        count[str1[i] - 'a']++;
        count[str2[i] - 'a']--;
    }

    for( i=0; i < 26; i++ )
    {
        if( count[i] != 0 ){
            printf("Not an Anagram");
            return 0;
        }  
    }

    printf("It is an anagram");

    return 0;
}