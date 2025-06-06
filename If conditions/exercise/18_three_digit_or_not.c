#include <stdio.h>
int main (){

 int a ;
 printf(" Enter your number : ");
 scanf("%d ", &a);

 if (a>100 && a < 999) printf(" It is three digit number.");
 else printf(" The number is not three digit.");

    return 0;
}