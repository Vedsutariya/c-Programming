#include <stdio.h>

int main(){

    int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10} , arr2[] = {};

    arr1[10]=arr2[10];

    for (int i = 0; i < 10; i++){
        printf("%d ", arr2[i]);
    }

    return 0 ;
}