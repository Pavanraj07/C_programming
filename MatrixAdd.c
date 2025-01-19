#include <stdio.h>
int main() {
    int r, c;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);
    int m1[r][c], m2[r][c], sum[r][c];
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &m1[i][j]);
        }
    }
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &m2[i][j]);
        }
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            sum[i][j] = m1[i][j] + m2[i][j];
        }
    }
    printf("Sum of the matrices:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
