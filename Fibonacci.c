#include <stdio.h>

int main() {
    int n, fib1 = 0, fib2 = 1, temp;
    printf("Enter the number of steps: ");
    scanf("%d", &n);

    printf("Fibonacci Sequence: %d, %d", fib1, fib2);
    for (int i = 3; i <= n; i++) {
        temp = fib1 + fib2;
        printf(", %d", temp);
        fib1 = fib2;
        fib2 = temp;
    }
    printf("\n");
    return 0;
}
