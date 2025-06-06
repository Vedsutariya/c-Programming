#include <stdio.h>

void getCube(int);
int main()
{
    int val;

    getCube(2);

    return 0;
}

void getCube(int val)
{
   printf(" %d", val*val*val);
}