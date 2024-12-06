//sort array till k in ascending and remaining in descending
#include<stdio.h>

void readArray(int arr[], int n) {
    for( int i=0; i<n ; i++){
        scanf("%d",&arr[i]);
    }
}

void printArray( int arr[], int n ){
    for(int i=0; i<n; i++ )
        printf(" %d ",arr[i]);
}

void swap( int *p, int *q ){
    int temp;
    temp = *p;
    *p = *q;
    *q= temp;
}

void Sorting( int arr[] , int n,int k){
    int i, j, status;
    for( i=0; i<k-1; i++ ){
        status = 0;
        for( j=0; j<k-i-1; j++ ){
            if( arr[j]>arr[j+1]){
                swap( &arr[j], &arr[j+1] );
                status = 1;
            }
        }
        if( status == 0 )
            break;
    }
    for( k; k<n-1; k++ ){
        status = 0;
        for( j=k; j<n-i-1; j++ ){
            if( arr[j]<arr[j+1]){
                swap( &arr[j], &arr[j+1] );
                status = 1;
            }
        }
        if( status == 0 )
            break;
    }
}


int main() {
    int n,k, arr[10];

    printf("Enter the size of the array:");
    scanf("%d",&n);

    printf("Enter the elements of the array:");
    readArray( arr,  n);

    printf("Enter k:");
    scanf("%d",&k);

    printf("Before Sorting:");
    printArray( arr , n);

    Sorting( arr , n , k);

    printf("\nAfter Sorting:");
    printArray(arr , n);


    return 0;
}