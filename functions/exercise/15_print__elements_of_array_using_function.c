#include <stdio.h>
void printArray (int);
int main (){

    int sum;
    printArray(sum);

    return 0 ;
}

void printArray (int  sum)
{
    int i , arr[10], n ;
    printf("Enter number of elements under 10 :");
    scanf("%d", &n);

    for (i=0;i<n;i++)
    {
        printf("Enter your number %d:", i+1);
        scanf("%d", &arr[i]);
    }
        
    for (i=0;i<n;i++)
    printf("%d, ", arr[i]);
}