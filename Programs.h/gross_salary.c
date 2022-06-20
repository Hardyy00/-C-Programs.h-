#include <stdio.h>
int main()
{
float Basic_s, dearness_a, rent_a;
float gross_s;

printf("Enter Your Basic Salary:\n");
scanf("%f", &Basic_s);


dearness_a= Basic_s*40/100;
rent_a= Basic_s*20/100;

 /*Formula for gross salary*/

gross_s= Basic_s + rent_a + dearness_a;

    printf("Your Gross Salary is %f\n", gross_s);

     return 0;
}