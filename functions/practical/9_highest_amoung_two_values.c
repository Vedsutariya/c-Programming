#include <stdio.h>
    void findHighest(int,int);

int main (){

    findHighest(20,60);
    findHighest(678,346);
    findHighest(4456,32568);

    return 0 ;
}
void findHighest(int val1, int val2)
{
    if (val1 > val2)     printf("%d is greater than %d\n", val1,val2);
    
    else if (val2>val1)  printf("%d is greater than %d\n", val2 ,val1);

    else                 printf("%d and %d are equal \n", val1, val2);
}