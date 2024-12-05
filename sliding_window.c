#include <stdio.h>

void readArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf(" %d ", arr[i]);
}



 void SubArray(int arr[], int n, int k)
 {
     int i, j, curr_sum, max_sum;
     curr_sum = 0;
     for( i=0; i<k; i++ ){
         curr_sum = curr_sum + arr[i]; 
     }
     max_sum = curr_sum;
     for( i=k ; i<n ; i++ ){
         curr_sum = curr_sum + arr[i] - arr[i-k];
         if( curr_sum > max_sum )
             max_sum = curr_sum;
     }

     printf("%d",max_sum);
 }

int main()
{
    int n, k, arr[10], sum;

    printf("Enter the size of the array:");
    scanf("%d", &n);

    printf("Enter the elements of the array:");
    readArray(arr, n);

    printf("Enter k:");
    scanf("%d", &k);

    SubArray(arr, n, k);

    return 0;
}