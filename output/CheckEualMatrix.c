#include<stdio.h>
int main() {
    int r, c, a[10][10], b[10][10], same = 1;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &b[i][j]);
            if (a[i][j] != b[i][j]) {
                same = 0;
            }
        }
    }
    if (same) {
        printf("The matrices are equal.\n");
    } else {
        printf("The matrices are not equal.\n");
    }
    return 0;
}
