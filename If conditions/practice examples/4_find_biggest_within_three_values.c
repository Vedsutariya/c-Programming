#include <stdio.h>

int main (){

int val1=12, val2=23 , val3 = 29;

if (val1>val2)
{if (val1>val3)  printf (" %d is the biggest.", val1);}

else if (val2>val3)

{if (val2>val1) printf("%d is the biggest.", val2);}

else printf("%d is the biggest.", val3);

    return 0;
}