#include <stdio.h>
int main (){

    int val, i = 1;

    printf("Enter your number:");
    scanf("%d", &val);

    while (i<val)
    {
        if (i*i>val)
        {
            printf("Square root is not possible");
            break;
        }

        if(i*i==val)
        {
            printf("%d is the square root", i);
            break;
        }
            i++;
    }

    

    return 0 ;
}