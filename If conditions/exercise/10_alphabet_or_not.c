#include <stdio.h>

int main () {

  char we ;
  printf("Enter your character:");
  scanf("%s",&we);


  if ( we >= 'A' && we >= 'Z' ||we >= 'a' && we >= 'z' ) 
printf(" It is an alphabet");

else printf(" it is not an alphabet");
    return 0;
} 