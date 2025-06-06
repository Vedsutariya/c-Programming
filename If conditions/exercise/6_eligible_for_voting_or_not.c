#include <stdio.h>

int main() {
    int num;

    printf("Enter your age: ");
    scanf("%d", &num);

    if (num>= 18) 
        printf("You are eligible for voting.\n");
     else 
        printf("You are not eligible for voting.\n");
    

    return 0;
}
