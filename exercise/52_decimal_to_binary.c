#include <stdio.h>

int main (){


    int binary=0,val,rem=0,multi=1;
    printf("Enter a decimal value:");
    scanf("%d", &val);

    while (val>0)
    {
        rem=val%2;
        binary=binary+(rem*multi);
        val = val / 2;
        multi=multi*10;
    }

    printf("%d", binary);
    
    return 0 ;
}