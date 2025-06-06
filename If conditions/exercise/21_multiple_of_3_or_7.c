#include <stdio.h>

int main (){

int a ;
printf(" Enter your number:");
scanf(" %d", &a);

 if (a%21 == 0 ) printf(" it is  a multiple of 3 and also of 7.");
else if (a %7==0) printf(" It is a multile of 7.");
else if (a % 3==0)printf(" It is a multiple of 3.");
else printf(" it is neither a multiple of 3 nor of 7.");

    return 0;

}
