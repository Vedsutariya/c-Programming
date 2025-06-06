#include <stdio.h>

int main (){

 int num1, num2;
 char opr;
 printf("Enter your first number:");
 scanf("%d", &num1);
 printf("Enter your second number:");
 scanf("%d", &num2);
 printf("Enter your operation:");
 scanf(" %c", &opr);
 

 if (opr== '+') printf("%d", num1+num2);
 else if (opr == '-') printf(" %d", num1-num2);
 else if (opr == '/') printf("%d", num1/num2);
 else if (opr == '*') printf("%d", num1*num2);
 else if(opr == '%') printf(" %d", num1%num2);
 else printf("Invalid operation");


    return 0 ;
}