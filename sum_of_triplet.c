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

void compare( int arr[], int x, int n){
    int i,j,k,y;
    for( i=0; i<n; i++ ){
        for( j=i+1;j<n; j++ ){
            for( k=j+1; k<n; k++ ){
                y=arr[i]+arr[j]+arr[k];
                if( x == y){
                    printf("%d %d %d \n",arr[i],arr[j],arr[k]);
                }
            }
        }
    }
}

int main() {
    int n,x, arr[10];

    printf("Enter the size of the array:");
    scanf("%d",&n);


    printf("Enter the elements of the array:");
    readArray( arr,  n);

    printf("Enter x:");
    scanf("%d",&x);

    compare( arr , x, n);

    return 0;
}