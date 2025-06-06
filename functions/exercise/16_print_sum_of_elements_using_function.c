#include <stdio.h>
void getsumofArray (int);
int main (){

    int sum;
    getsumofArray(sum);

    return 0 ;
}

void getsumofArray (int  sum)
{
    int i , arr[10], n ;
     sum = 0 ;

    printf("Enter number of elements under 10 :");
    scanf("%d", &n);

    for (i=0;i<n;i++)
    {
        printf("Enter your number %d:", i+1);
        scanf("%d", &arr[i]);

        sum+=arr[i];
    }

printf(" Sum = %d", sum);
}