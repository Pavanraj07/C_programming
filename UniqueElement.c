#include<stdio.h>

int main() {
    int arr[10], i, j, n, k=0, unique[10], flag;

    printf("Enter the size of the array:");
    scanf("%d",&n);

    printf("Enter the array elements:");
    for( i = 0; i< n ; i++ )
        scanf("%d",&arr[i]);

    for ( i=0; i<n; i++ ){
        flag = 1;
        for( j =0; j<n; j++ ){
            if( i != j && arr[i] == arr[j] ){
                flag = 0;
                break;
            }  
        }
        if( flag == 1 ){
            unique[k] = arr[i];
            k++;
        }
    }

    printf("The unique Elements are:");
    for( i=0; i<k; i++ ){
        printf(" %d ",unique[i]);
    }

    return 0;
}