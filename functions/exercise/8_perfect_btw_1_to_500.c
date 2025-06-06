#include <stdio.h>
int main (){

    int val ;
    printPerfect(val);

    return 0 ;
}

void printPerfect(int val)
{
    int sum = 0 , i = 1 , range = 1 , tmp;
    while (range<=100)
    {
        val = range ;
        tmp = val ;
        sum = 0 ;
        i = 1 ;
            while (i<val)
            {
                if (val%i==0)
                {
                    sum = sum +i;
                }

                i++;
            }

            if (sum == tmp)
            {
                printf("%d\n", sum);
            }

            range ++;
    }
}