#include <stdio.h>

int main () {

  char we ;
  printf("Enter your character:");
  scanf("%s",&we);


  if ( we == 'A' || we == 'E' || we == 'I' || we == 'O' || we == 'U' ||we == 'a' || we == 'e' || we == 'i' || we == 'o' || we == 'u') 
printf(" It is a vowel.");

else printf(" it is not a vowel.");
    return 0;
} 