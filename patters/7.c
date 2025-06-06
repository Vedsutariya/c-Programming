// 10101
// 01010
// 10101
// 01010
// 10101
#include <stdio.h>
int main (){

    int i=1, j=0;

    for (i=1;i<=5;i++)
    {
        
        for (j=i;j<=i+4;j++)
        {
            printf("%d",j%2);
        }
         printf("\n");
    }

return 0 ;
}