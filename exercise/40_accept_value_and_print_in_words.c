#include <stdio.h>

int main (){

    int val,rev=0,dig=0;
    printf("Enter your value:");
    scanf("%d", &val);

    while(val>0)
    {
        rev=(rev*10)+val%10;
        val=val/10; 
    }
        while (rev>0)
        {
            dig=rev%10;

                if      (dig==0) printf("Zero ");
                { if (dig==1) printf("One ");
                 if (dig==2) printf("Two ");
                 if (dig==3) printf("Three ");
                 if (dig==4) printf("Four ");
                 if (dig==5) printf("Five ");
                 if (dig==6) printf("Six ");
                 if (dig==7) printf("Seven ");
                 if (dig==8) printf("Eight ");
                 if (dig==9) printf("Nine ");}

                rev=rev/10;
        }
    return 0 ;
}