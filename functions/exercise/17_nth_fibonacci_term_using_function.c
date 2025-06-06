#include <stdio.h>

void printFibonnaci(int);
int main (){

    int val ;

    printFibonacci(val);

    return 0 ;
}

  void  printFibonacci( int val)
{
    int i = 1 , pv = 0 , cv = 1, nv = 0 ;
    printf(" %d", pv);
    printf(" %d", cv);

    while (i<=cv)
    {
        nv=pv+cv;
        printf(" %d", nv);
        pv=cv;
        cv = nv;
        i++;
    }

}