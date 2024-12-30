#include<stdio.h>

int main() {

    int num, rem, small = 10;

    printf("Enter a number:");
    scanf("%d",&num);

    while ( num > 0 ){
        rem = num % 10;
        if ( rem < small ){
            small = rem;
        }
        num = num / 10;
    }
    printf("The Smallest NUmber is: %d", small);


    return 0;
}