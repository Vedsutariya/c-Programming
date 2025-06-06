#include <stdio.h>

void getReversenumber(int);
int main()
{

    int val;


    getReversenumber(val);

    return 0;
}

    void getReversenumber (int val)
    {

        int sum=0,rev=0;
        printf("Enter a value=");
        scanf("%d", &val);

        while (val > 0)
        {
            sum=val % 10;
            rev=(rev*10)+sum;
            val=val/10;
        }

        printf("Reverse=%d", rev);
    }