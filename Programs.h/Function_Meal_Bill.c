#include <stdio.h>
float tb(float );
int main()
{
    float mc;

    printf("\nEnter the meal charge : ");
     scanf("%f",&mc);

     printf("Total bill = %f",tb(mc));

     return 0;
}

float tb(float mc)
{
    float tax,total,tip;

    tax=mc * (20/100.0) ;
    tip= (mc+tax)*(15/100.0);

    total = mc+tax+tip;

    return total;
}