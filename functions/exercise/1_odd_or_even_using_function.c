#include <stdio.h>

void getOddorEven(int);

int main() {
    int num;

    getOddorEven(123);
    

    return 0;
}

void getOddorEven(int num)
{

    if (num % 2 == 0) 
        printf("The number is even.\n");
     else 
        printf("The number is odd.\n");
}