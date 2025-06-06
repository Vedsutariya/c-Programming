#include <stdio.h>

int main (){

    int arr[10], i, n, evenCount = 0, oddCount = 0;

    printf("Enter number of elements under 10: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter your number %d: ", i + 1);
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("Total even elements: %d\n", evenCount);
    printf("Total odd elements: %d\n", oddCount);

    return 0;

}