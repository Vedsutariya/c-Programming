#include <stdio.h>

int main (){

    int n ,i ,val, arr1[] = {10, 20, 30, 40, 50, 60};

    printf("enter the positon from where you want to delete\n");
    scanf("%d",&n);


    // 3 rd value but index = 2

    // 0    1       2       3       4       5
    // 10,  20,     30,     40,     50,     60

    for (i = n-1 ; i < 6 ; i++)
    {
        arr1[i] = arr1[i+1];
    }

    for (i = 0; i < 5; i++)
        printf("%d ", arr1[i]);

  return 0 ;
  }
