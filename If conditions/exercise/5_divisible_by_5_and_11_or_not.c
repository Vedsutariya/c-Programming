#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 55 == 0) 
        printf("The number is divisible by 5 and 11.\n");
     else 
        printf("The number is not divisible by 5 and 11.\n");
    

    return 0;
}
