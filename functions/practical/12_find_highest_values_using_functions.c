#include <stdio.h>
int getHighest (int,int);

int main () {

    printf("Hightest value id %d\n", getHighest(20,30));
    printf("Hightest value id %d", getHighest(457,32350));

    return 0 ;

}

int getHighest(int val1, int val2)
{
    if (val1 > val2)
    return val1;
    
    else if (val2>val1)
    return val2;

}