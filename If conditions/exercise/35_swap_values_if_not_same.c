#include <stdio.h>
int main (){

int val1, val2;

printf("Enter your first number:");
scanf("%d", &val1);
printf("Enter your second number:");
scanf("%d", &val2);

if (val1==val2) printf("Both are equal ");
else 
{
val1=val1+val2;
val2=val1-val2;
val1=val1-val2;
}

printf("%d, %d", val1,val2);
    return 0;
}