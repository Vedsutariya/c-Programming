#include <stdio.h>

int main (){

  int num1, num2;

  printf("Enter your first number:");
  scanf("%d", &num1);

  printf(" Enter your second number :");
  scanf("%d", & num2);

  if ( num1==5||num2==5 || num1+num2==5 || num1-num2== 5 || num2-num1==5) printf("True.");
  else printf("False");

    return 0;
}