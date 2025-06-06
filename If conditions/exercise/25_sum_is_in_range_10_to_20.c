#include <stdio.h>

int main (){

    int num1, num2, sum ;
    printf("Enter your first number:");
    scanf("%d", &num1);

    printf("Enter your second number:");
    scanf("%d", &num2);

sum = num1+num2;

    if (sum<20 && sum>10) printf("It is inclusive");
    else printf(" It in not inclusive.");

    return 0;
}