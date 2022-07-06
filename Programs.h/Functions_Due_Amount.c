#include <stdio.h>
float bill(int );
int main()
{
    int units;
    printf("\nEnter the consumed units : ");
     scanf("%d",&units);

    printf("\nAmount due = %f",bill(units));

    return 0;
}

float bill(int u)
{
    float gt,ec;

    if(u>=1 && u<=100)
          ec=u*2.00;
     else if (u>=101 && u<=200)
          ec=100*2.00 + (u-100)*3.50;
     else if( u>=201 )
           ec= 100 *2.00 + 100*3.50 + (u-200)*4.50;

    gt=ec *(10/100.0);

    return (ec+gt);
}