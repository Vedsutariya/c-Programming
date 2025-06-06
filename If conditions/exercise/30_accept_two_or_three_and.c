#include <stdio.h>

int main (){

  int num1, num2, choice;
  int a,b,c;

  printf("choose from 2or 3:");
  scanf("%d", &choice);

  if (choice == 2)
  {printf(" Enter your first number:")  ;
  scanf("%d", &num1);
  printf("Enter your second number:");
  scanf("%d", &num2);
   printf("%d", num1+num2);}
  

  else {

    if (choice == 3 ) 
  
    {printf(" Enter your first number:")  ;
    scanf("%d", &a);
    printf("Enter your second number:");
    scanf("%d", &b);
    printf("Enter your third number:");
    scanf("%d", &c);}
  
    printf(" %d",a+b+c);
 
  }

    return 0;
}