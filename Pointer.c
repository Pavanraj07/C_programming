#include<stdio.h>

int main() {
    int num;
    int *p;

    num = 10;
    p = &num;

    
    printf("%d",*p);

    return 0;       
}