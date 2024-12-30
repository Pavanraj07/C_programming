#include <stdio.h>
#define SIZE 26
int main()
{
    char str[100];
    int count[SIZE] = {0};
    int i, flag = 1, frequency = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    for (i = 0; str[i]; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
            count[str[i] - 'A']++;

        else if (str[i] >= 97 && str[i] <= 122)
            count[str[i] - 'a']++;
    }

    for (i = 0; i < SIZE; i++)
    {
        if (count[i] > 0)
        {
            if (frequency == 0)
                frequency = count[i];
            else if (count[i] != frequency)
            {
                flag = 0;
                break;
            }
        }
    }

    if (flag)
        printf("Equal Occurence");
    else
        printf("Unequal Occurence");

    return 0;
}