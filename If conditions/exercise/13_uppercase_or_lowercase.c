#include <stdio.h>

int main () {

  char we ;
  printf("Enter your character:");
  scanf("%s",&we);


  if ( we <= 'A' && we <= 'Z'  ) 
printf("It is upper case.");
else printf(" it is lowercase");
    return 0;
} 