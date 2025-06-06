// 13579
// 3579 
// 579  
// 79   
// 9
#include <stdio.h>
int main (){

    int i=1, j=0;

    for (i=0;i<5;i++)
    {
        
        for (j=2*i+1;j<=9;j+=2)
        {
            printf("%d",j);
        }
         printf("\n");
    }

return 0 ;
}