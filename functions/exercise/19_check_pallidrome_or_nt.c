#include <stdio.h>
void printPallidrome ( val );


int main (){

    int val ;
    printPallidrome(val);

    return 0 ;
}

void printPallidrome (int val )
{
    int tmp , rev =0,sum=0;
    printf("Enter a value:");
    scanf("%d", &val);

    tmp = val ;

    while (val>0)
    {
        sum = val %10;
        rev = (rev*10)+sum;
        val = val / 10;
    }

    if (rev == tmp ) printf(" yes it is a Pallidrome");

    else printf(" It is not a pallidrome");
}