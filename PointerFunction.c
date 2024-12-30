#include<stdio.h>

void callByValue( int a, int b ){
    a = a + 10;
    b = b + 10;
    printf("Inside function: a=%d and b=%d",a,b);
}

int main() {
    int x = 10,y = 20;
    printf("\nBefore Calling: x=%d and y=%d\n",x,y);
    callByValue(x,y);
    printf("\nAfter Calling: x=%d and y=%d",x,y);
    return 0;
}