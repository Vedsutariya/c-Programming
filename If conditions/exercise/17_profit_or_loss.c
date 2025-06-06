#include <stdio.h>

int main (){

int cp , sp ;

printf("  Enter your cost price:");
scanf("%d", &cp);

printf(" Enter your selling price:");
scanf(" %d ", &sp);

if (sp>cp ) printf(" You are in profit.");
else printf(" You are in loss");

    return 0;
}