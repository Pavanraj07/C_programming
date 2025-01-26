#include <stdio.h>

void decimalToBinary(int n) {
    if (n == 0)
        return;
    decimalToBinary(n / 2);
    printf("%d", n % 2);
}

int main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    printf("Binary representation: ");
    if (num == 0) {
        printf("0");
    } else {
        decimalToBinary(num);
    }
    printf("\n");

    return 0;
}
