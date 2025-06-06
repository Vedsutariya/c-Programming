#include <stdio.h>

int main () {

  char we ;
  printf("Enter your character:");
  scanf("%c",&we);


  if ( we >= 'A' && we >= 'Z' ||we >= 'a' && we >= 'z' ) 
printf(" It is an alphabet");

else if (we > 0 &&  we < 9 ) printf("it is a digit.");

else printf(" it is a special character.");
    return 0;
} 