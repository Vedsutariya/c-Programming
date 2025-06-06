#include <stdio.h>
int main (){

    doSum(20,54);

    return 0 ;
}

void doSum(int val1, int val2)
{
    int sum = 0 ;

    sum = val1+val2;
    printf("The sum of %d and %d is %d", val1 , val2, sum);
}