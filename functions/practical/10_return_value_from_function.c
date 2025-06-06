#include <stdio.h>

int getValue(int);
int main (){

    int i;

    i = getValue(12);
    printf("value =%d\n",i);

    printf("Value = %d", getValue);

    return 0 ;
}

int getValue (int val)
{
    return val;
}