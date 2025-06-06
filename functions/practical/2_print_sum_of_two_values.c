#include <stdio.h>
void doSum();

int main (){

    doSum();

    return 0 ;
}

void doSum ()
{
    int val1=10,val2=20,sum=30;

    sum = val1+val2;
    printf("The sum of %d and %d is %d",val1,val2,sum);
}