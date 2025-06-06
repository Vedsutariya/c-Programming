#include <stdio.h>
int main (){

    int i= 1, cnt = 0 ;

    while (i<=5)
    {
        if (i%2==0)
        cnt ++;

    i ++;
    }

    printf("Number of even numbers is %d", cnt);
    return 0 ;
}