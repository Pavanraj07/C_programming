#include <stdio.h>

int main() {
    int n, i;
    int arr[100],largest;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    largest = arr[0];

    for(i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    printf("The largest number in the array is %d\n", largest);
    return 0;
}
