#include <stdio.h>

int main (){

    printval(25);
    printval(4);

    return 0 ; 
}

void printval(int val)
{
    printf("The value is %d\n", val);
}