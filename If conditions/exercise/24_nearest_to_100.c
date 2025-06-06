#include <stdio.h>

int main (){

  int a,b,ax,bx;

  printf(" Enter your first number:");
  scanf("%d",&a);

  printf(" Enter your second number:");
  scanf("%d",&b);

  if (a==b ) printf("Zero.");
  else if (a>100 ) ax = a - 100 ;
  else ax = 100-a;
   if (b>100) bx = b - 100;
   else bx = 100-b;

   if (ax<bx) printf(" first number is greater.");
   else if (bx<ax) printf(" Second number is nearer.");
   else printf(" They are equally nearer.");


    return 0;
}