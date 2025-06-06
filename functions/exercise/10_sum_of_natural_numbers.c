
#include <stdio.h>

int getSumofRange(int);

int main ()
{

    int val ;
    int sum ;

    printf("Enter the last number of your range from 1 to :");
    scanf(" %d", &val);

    sum = getSumofRange(val);
    
    printf("\n The sum of value from 1 to %d : %d\n\n", val , sum);

    return 0 ;
}
int getSumofRange(int  n1)
{
int res;

if (n1==1)
    return (1);
else 
res = n1+getSumofRange (n1-1);
return (res);

}