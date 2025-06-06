// 1
// 00
// 111
// 0000
// 11111
#include <stdio.h>
int main (){

    int i=1, j=0;

    for (i=1;i<=5;i++)
    {
        
        for (j=1;j<=i;j++)
        {
            printf("%d",i%2);
        }
         printf("\n");
    }

return 0 ;
}