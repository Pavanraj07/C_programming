#include<stdio.h>

int main(){

    int arr[10],n, i, largest, secondLargest;

    printf("Enter the size of the array:");
    scanf("%d",&n);

    printf("Enter the array elements:");
    for( i = 0; i< n ; i++ )
        scanf("%d",&arr[i]);

    largest = arr[0];
    secondLargest = arr[0];

    for ( i=1 ; i<n; i++ ){
        if( arr[i] > largest ){
            secondLargest = largest;
            largest = arr[i];
        } 
        else if ( arr[i] > secondLargest && arr[i] != largest ){
            secondLargest = arr[i];
        }
    }

    printf("The Second Largest Element is:");
    printf(" %d ",secondLargest);

}