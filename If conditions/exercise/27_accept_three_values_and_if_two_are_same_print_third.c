#include <stdio.h>
int main (){

    int num1, num2, num3;

    printf("Enter a number: ");
    scanf("%d", &num1);
    printf("Enter a number: ");
    scanf("%d", &num2);
    printf("Enter a number: ");
    scanf("%d", &num3);

    if (num1==num2)  printf(" %d", num3);
    else if (num1==num3) printf(" %d", num2);
    else if (num2==num3)  printf(" %d", num1);

    else printf(" %d", num1 + num2 + num3);

    return 0;
}