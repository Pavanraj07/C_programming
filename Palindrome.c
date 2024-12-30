#include<stdio.h>

int main(){
    
    int num, inum, rem, rev = 0;

    printf("Enter a number:");
    scanf("%d",&num);
    inum = num;

    while(num > 0) {
        rem = num % 10;
        num = num / 10;
        rev = rev * 10 + rem;
    }

    rev==inum ? printf("It is a palindrome") : printf("It is not a palindrome");

    return 0;
}