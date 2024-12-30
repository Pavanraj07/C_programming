#include<stdio.h>

int main() {

    int arr[10],n ,i, j, frequency, count;

    printf("Enter the size of the array:");
    scanf("%d", &n);

    printf("Enter the elements of the array:");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for( i=0 ; i<n ; i++ ){
        count = 1;
        for( j=0; j<n ; j++ ){
            if( arr[i] == arr[j] && i != j ){
                count = count+1;
            }
            
        }
    }

    printf("The frequency is:\n");
    for( i=0; i<n ; i++ ){
        printf("%d : %d\n",arr[i], count);
    }

    return 0;
}