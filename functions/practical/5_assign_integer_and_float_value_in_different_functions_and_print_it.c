#include <stdio.h>


void printInteger(int);
void printFloat(float);

int main (){

    printInteger(25);
    printFloat(32.45);

    printInteger(63);
    printFloat(52.75);
    
    return 0 ;
}

void printInteger (int val)
{
    printf("The value is %d", val);
}

void printFloat (float val)
{
    printf("The value is %.2f\n", val);
}