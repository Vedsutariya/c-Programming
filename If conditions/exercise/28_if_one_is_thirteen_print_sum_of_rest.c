#include <stdio.h>

int main (){

    int num1,num2,num3;
    printf("Enter your first number:");
    scanf("%d", &num1);
    printf("Enter your second number:");
    scanf("%d", &num2);
    printf("Enter your third number:");
    scanf("%d", &num3);
    
    if (num1==13) printf("%d",num3+num2);
    else if (num2==13) printf("%d", num1+num3);
    else if (num3==13) printf(" %d", num1+num2);
    else printf("%d", num1+num2+num3);


    return 0;
}