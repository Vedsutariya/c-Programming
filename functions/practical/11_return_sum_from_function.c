#include <stdio.h>
int getSum(int,int);
int main (){

    int a = 12 , b = 23 , sum  = 0;
    sum = getSum(a,b);
    printf("Their sum is %d\n",sum);

    return 0 ;
}

int getSum(int val1, int val2)
{
    return val1+val2;
}