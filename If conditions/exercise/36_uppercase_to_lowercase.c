#include <stdio.h>
int main (){

    char ch;
     printf("Enter your alphabet:");
     scanf("%c", &ch);
if (ch>='A' && ch <='Z')
{
    ch=ch+32;
    printf("%c", ch);
}

else {
    printf("%c", ch-32);
}
    return 0;
}