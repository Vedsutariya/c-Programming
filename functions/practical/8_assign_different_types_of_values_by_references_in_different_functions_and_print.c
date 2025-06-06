#include <stdio.h>

void printInteger   (int)       ;
void printLong      (long)      ;
void printFloat     (float)     ;
void printDouble    (double)    ;
void printCharacter (char)      ;
void printString    (char[])    ;




int main (){

    int iVal = 25;
    long lval = 123456789;
    float fval = 1234.56;
    double dVal = 1234.5678910;
    char cVal='A';
    char message[] =  "Hello";

    printInteger   (iVal)       ;
    printInteger   (lval)       ;
    printFloat     (fval)       ;
    printDouble    (dVal)       ;
    printCharacter (cVal)       ;
    printString    (message)    ;

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

