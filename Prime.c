#include<stdio.h>


int isPrime(int n) {
    int i;
    if( n == 0 || n == 1 )
        return 0;
    if (n <= 3) {
        return 1;
    }

    if( n%2 == 0 || n%3 == 0 )
        return 0;

    for ( i = 5; i*i<=n ; i=i+6  ){
        if ( n%i == 0 || n%(i+2)==0)
            return 0;
    }
    return 1;
}

int main() {
    int num;
    printf("Enter n:");
    scanf("%d",&num);
    if( isPrime(num)) {
        printf("Prime");
    }
    else {
        printf("Not Prime");
    }

    return 0;
}