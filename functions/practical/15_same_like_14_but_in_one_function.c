#include <stdio.h>
int getCal(int,int,int);
int main (){

    printf("Addition is %d\n", getCal(20,30,1));
    printf("Subtraction is %d\n", getCal(20,30,2));
    printf("Division is %d\n", getCal(20,30,3));
    printf("Multiplication is %d\n", getCal(20,30,4));
    printf("modular is %d", getCal(20,30,5));

    
    return 0 ;
}
// add = 1 , sub = 2, div = 3 , multi = 4 , modu=5

int getCal(int val1, int val2 , int opr)
{
    if (opr == 1)
    return val1 + val2;

    else if (opr == 2)
    return val1 -val2;

    else if (opr == 3)
    return val1/val2;

    else if (opr == 4)
    return val1 * val2;

    else if (opr == 5)
    return val1%val2;


}