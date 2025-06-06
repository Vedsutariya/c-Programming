#include <stdio.h>

    int getSum(int,int);
    int getDiff(int,int);
    int getQuetient(int,int);
    int getProduct(int,int);

int main (){

    printf("addition is %d\n", getSum(20,345768));
    printf("Subtraction is %d\n", getDiff(20,345768));
    printf("Division %d\n", getQuetient(20,345768));
    printf("Multiplication %d\n", getProduct(20,345768));

    return 0 ;

}

int getSum(int val1 , int val2)
{
    return val1 + val2;
}

int getDiff(int val1 , int val2)
{
    return val1 - val2;
}
int getQuetient(int val1 , int val2)
{
    return val1 / val2;
}
int getProduct(int val1 , int val2)
{
    return val1 * val2;
}