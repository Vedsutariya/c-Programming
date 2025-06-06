#include <stdio.h>

void isArmstrong(int);

int main() {

    int val = 0;

        printf("Enter your value:");
        scanf(" %d", &val);

        isArmstrong(val);



    return 0 ;
}

void isArmstrong(int val)
{
    int digit, sum=0, smp=val ;
    while (val>0)
    {  
            digit = val %10;
            sum = sum + (digit*digit*digit);
            val = val / 10;
    }
     if (sum == sum)
        {
            printf("Yes Armstrong");
        }

        else printf("not Armstronf");
    }