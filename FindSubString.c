
#include<stdio.h>

int main()
{
    char str1[100], str2[100];
    int i, j,n;
    int res[10]={0};

    printf("Enter a string: ");
    scanf("%[^\n]s",str1);

    while( getchar() != '\n' );

    printf("Enter a sub string: ");
    scanf("%[^\n]s",str2);

    for( i = 0; str1[i]; i++ )
    {
        for( j=i; str1[j]; j++ )
        {
            if( str1[i] == str2[j] )
                res[i] = i;
                
        }
    }
    for( i=0; i<n; i++ )
        printf("%d",res);
    



    return 0;
}
