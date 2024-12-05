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
    int temp = *p;
    *p = *q;
    *q= temp;
}

void insertionSort( int arr[] , int n){
    int i, j,min;
    for( i=0; i<n-1; i++ ){
        min = i;
        for( j=i+1; j<n; j++ ){
            if( arr[min]>arr[j]){
                min=j;
            }
        }
        swap( &arr[min], &arr[i] );
    }
}

int main() {
    int n, arr[10];

    printf("Enter the size of the array:");
    scanf("%d",&n);

    printf("Enter the elements of the array:");
    readArray( arr,  n);


    printf("Before Sorting:");
    printArray( arr , n);

    insertionSort( arr , n);

    printf("\nAfter Sorting:");
    printArray(arr , n);


    return 0;
}