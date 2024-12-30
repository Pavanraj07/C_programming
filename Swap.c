#include<stdio.h>

int main(){

    int a,b;

    printf("Enter a: ");
    scanf("%d",&a);
    
    printf("Enter b: ");
    scanf("%d",&b);

    a^= b^= a^= b;

    printf("Swapped Element is a: %d and b: %d ",a,b);


    return 0;
}