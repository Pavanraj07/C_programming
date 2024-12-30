#include<stdio.h>

int main() {

    int num, rem , rev = 0, sum = 0;

    printf("Enter a number:");
    scanf("%d", &num);


    while ( num > 9 ){
        sum = 0;

        while ( num > 0 ) {
        rem =  num % 10;
        num = num / 10;
        sum = sum + rem;
        } 

        if ( sum > 1 ){
            num = sum;
        }
    }
    
    printf("Your Lucky number is: %d",num);

    return 0;
}