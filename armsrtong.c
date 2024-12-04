#include<stdio.h>
#include<math.h>

int main() {

    int num, power = 0 , rem = 0, res = 0;
    
    printf("Enter a number:");
    scanf("%d", &num);
    int X = num;

    while ( num > 0 ) {
        rem = num % 10;
        num = num / 10;
        power++;
    }

    num = X;
    res = 0;

    while ( num > 0) {
        rem = num % 10;
        num = num / 10;
        res = res + (int)pow(rem, power);
    }

    if ( X == res ){
        printf("It is a Armstrong number");
    } else {
        printf("It is not a Armstrong number");
    }

    return 0;
}