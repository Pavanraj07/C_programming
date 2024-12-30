#include<stdio.h>

int main() {
    int i, j, n,flag, size;
    int arr[10], k = 0, l = 0;

    printf("Enter range:");
    scanf("%d",&n);

    for ( j = 2; j <= n ; j++ ){
        flag = 0;
        for( i = 2; i*i <= j; i++ ){
            if( j%i == 0 ){
                flag = 1;
                break;
            }
        }
        if( flag == 0 ){
            arr[k] = j;
            k++;
        }

        size = k;
    }

    for(k=0; k< size ; k++){
        printf("%d\t",arr[k]);
    }

    for( k=0; k<size; k++) {
        for( l =0; l<size; l++){
            if( arr[k] + 6 == arr[l]) {
                printf("\n%d and %d\n",arr[k], arr[l]);
            }
        }
    }

    return 0;
}