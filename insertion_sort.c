
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

void insertionSort( int arr[] , int n){
    int i, j,key;
    for( i=1; i<n; i++ ){
        key = arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
            }
        
        arr[j+1]=key; 
    }
  }

int main() {
    int n, arr[100];

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