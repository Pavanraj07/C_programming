#include <stdio.h>

int main() {
    char ch;
    float n1, n2;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &ch);

    printf("Enter two operands: ");
    scanf("%f %f", &n1, &n2);

    switch (ch) {
        case '+':
            printf("%.2f + %.2f = %.2f\n", n1, n2, n1 + n2);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n", n1, n2, n1 - n2);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f\n", n1, n2, n1 * n2);
            break;
        case '/':
            if (n2 != 0) {
                printf("%.2f / %.2f = %.2f\n", n1, n2, n1 / n2);
            } else {
                printf("Division by zero is not allowed\n");
            }
            break;
        default:
            printf("Invalid operator\n");
            break;
    }

    return 0;
}
