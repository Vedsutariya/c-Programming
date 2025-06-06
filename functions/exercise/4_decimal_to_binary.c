#include <stdio.h>

void printBinary(int);
int main (){

    int val;
    printf("Enter a value :");
    scanf(" %d", &val);

    printBinary(val);

    return 0 ;
}

void printBinary(int val)
{
    int multi =1, binary=0 ,rem=0;

    while (val>0)
   { rem = val%2;
    binary = binary +(rem*multi);
    val = val/2;
    multi = multi*10;
   }
   printf("%d", binary);
}