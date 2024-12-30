#include <stdio.h>

int main()
{

    int arr[10];
    int i, j, temp = 0, k, n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the Elemenets of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    for (j = 0; j < k; j++)
    {
        temp = arr[n - 1];
        for (i = n - 1; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[0] = temp;
    }

    printf("Rotated Element is:");
    for (i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }

    return 0;
}