#include <stdio.h>

void printDecimal(int);
int main (){

    int binary;
    printf("Enter a value :");
    scanf(" %d", &binary);

    printDecimal(binary);

    return 0 ;
}

void printDecimal(int binary)
{
    int val=0 , base=1 ,rem=0;

    while (binary>0)
   { rem = binary %10;
    val = val +(rem*base);
    base = base*2;
    binary = binary/10;
   }
   printf("%d", val);
}