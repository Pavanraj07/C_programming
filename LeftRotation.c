#include<stdio.h>

int main() {

    int arr[10];
    int i, j,temp = 0, k, n;

    printf("Enter the size of the array: ");
    scanf("%d",&n);

    printf("Enter the Elemenets of the array: ");
    for( i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }

    printf("Enter k: ");
    scanf("%d",&k);

    for ( j= 0; j<k ; j++) {
        temp = arr[0];
        for (i=1; i<n; i++) 
            arr[i-1] = arr[i];

            arr[n-1] = temp;
    
    }

    printf("Rotated Element is:");
    for( i=0; i<n ; i++) {
        printf(" %d ",arr[i]); 
    }


    return 0;
}