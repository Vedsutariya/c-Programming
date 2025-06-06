#include <stdio.h>

int main (){

int i = 1, num, sum=0;

while (i<=3)
{
    printf("Enter your number:");
    scanf(" %d", &num);
    sum = sum + num;
    i ++;
}
    printf("Sum is %d", sum);

    return 0 ;
}