#include <stdio.h>

void printEvenandOdd(int  , int );

int main (){

    int start , end ;
    printf("enter your starting number:");
    scanf("%d", &start);

    
    printf("enter your ending number:");
    scanf("%d", &end);

        printEvenandOdd(start,end);

    return 0 ;
}

void printEvenandOdd(int start , int end)
{
    for (int i = start ; i<=end ; i ++)
    {
        if(i%2==0)
        printf("%d is even \n", i);
        else printf("%d id odd\n", i);
    }
}