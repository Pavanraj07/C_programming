#include <stdio.h>
int main() {
    int n, coeff;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        coeff = 1;
        for (int k = 0; k <= i; k++) {
            printf("%d ", coeff);
            coeff = coeff * (i - k) / (k + 1);
        }
        printf("\n");
    }
    return 0;
}
