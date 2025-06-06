// 1
// 01
// 101
// 0101
// 10101
#include <stdio.h>
int main (){

    int i=1, j=0;

    for (i=1;i<=5;i++)
    {
        
        for (j=i;j>=1;j--)
        {
            printf("%d",j%2);
        }
         printf("\n");
    }

return 0 ;
}