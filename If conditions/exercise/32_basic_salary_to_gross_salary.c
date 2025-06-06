#include <stdio.h>

int main (){

 float BS,HRA,DA;

 printf("Enter your basic salary:");
 scanf("%f", &BS);

    if (BS<=10000) 
    {
       HRA=0.2*BS;
       DA=0.8*BS;
    }

    else if (BS <= 20000) 
    {
       HRA=0.25*BS;
       DA= 0.9*BS;
    }

    else 
    {
        HRA=0.3*BS;
        DA=0.95*BS;
    }

   float GS=HRA+DA+BS;

    printf("Gross salary is %f.", GS);
    return 0;
}