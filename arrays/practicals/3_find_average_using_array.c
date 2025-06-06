#include <stdio.h>
int main (){

    int arr[10], i , n , sum = 0 , average ;

    printf("Enter number of elements under 10 :");
    scanf("%d", &n);

    for (i=0;i<n;i++)
    {
        printf("Enter your number %d:", i+1);
        scanf("%d", &arr[i]);

        sum+=arr[i];
    }

    average = sum / n;
    printf("Average is %d", average);

    return 0  ;
}