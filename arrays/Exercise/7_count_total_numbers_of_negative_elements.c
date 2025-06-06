#include <stdio.h>
int main() {
    int arr[100], n, i, count = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] < 0) {
            count++;
        }
    }
    printf("Total number of negative elements: %d\n", count);

    return 0;
}