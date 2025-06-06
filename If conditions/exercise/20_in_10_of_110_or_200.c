#include <stdio.h>
int main (){

    int a;

    printf("Enter a value:");
    scanf("%d", &a);

    if (a >=10 && a<=100) printf("In range");
    else if (a>=10 &&a<=200) printf("In range.");
    else printf("It is invalid");

    return 0;

}