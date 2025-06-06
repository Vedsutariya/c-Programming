#include <stdio.h>

void printInteger   (int)       ;
void printLong      (long)      ;
void printFloat     (float)     ;
void printDouble    (double)    ;
void printCharacter (char)      ;
void printString    (char[])    ;




int main (){

    printInteger   (123)       ;
    printInteger   (1234)      ;
    printFloat     (12.34)     ;
    printDouble    (1.2345)    ;
    printCharacter ('A')       ;
    printString    ("Hello")   ;

    return 0 ;
}

void printInteger (int val)
{
    printf("THe value is %d\n", val);
}

void printLong (long val)
{
    printf("The value id %ld\n", val);
}

void printFloat ( float val)
{
    printf("The value is %.2f\n", val);
}

void printDouble ( double val)
{
    printf("The value is %.2lf\n", val);
}

void printCharacter ( char val)
{
    printf("The value is %c\n", val);
}

void printString (char val[])
{
    printf("The value is %s\n", val);
}

