#include <stdio.h>

int main() {
    int amount, note2000, note500, note200, note100, note50, note20, note10, note5, note2, note1;

    printf("Enter the amount: ");
    scanf("%d", &amount);

    note2000 = amount / 2000;
    amount %= 2000;

    note500 = amount / 500;
    amount %= 500;

    note200 = amount / 200;
    amount %= 200;

    note100 = amount / 100;
    amount %= 100;

    note50 = amount / 50;
    amount %= 50;

    note20 = amount / 20;
    amount %= 20;

    note10 = amount / 10;
    amount %= 10;

    note5 = amount / 5;
    amount %= 5;

    note2 = amount / 2;
    amount %= 2;

    note1 = amount;

    printf("\nTotal number of notes:\n");
    printf("2000 = %d\n", note2000);
    printf("500  = %d\n", note500);
    printf("200  = %d\n", note200);
    printf("100  = %d\n", note100);
    printf("50   = %d\n", note50);
    printf("20   = %d\n", note20);
    printf("10   = %d\n", note10);
    printf("5    = %d\n", note5);
    printf("2    = %d\n", note2);
    printf("1    = %d\n", note1);

    return 0;
}
