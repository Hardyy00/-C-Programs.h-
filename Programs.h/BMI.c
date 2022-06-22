#include <stdio.h>
#include <math.h>
int main()
{
    float w,h,bmi;
    printf("\nEnter Weight of a person(in Kilograms): ");
    scanf("%f", &w);
    printf("\nEnter Height of a person(in meters) : ");
    scanf("%f", &h);

    bmi=w/pow(h,2.0);

    if(bmi<15)
             printf("\nBMI = %f\nBMI Category : Starvation", bmi);
    else if(bmi>=15.1 && bmi<=17.5)
             printf("\nBMI = %f\nBMI Category : Anorexic", bmi);
    else if(bmi>=17.6 && bmi<=18.5)
             printf("\nBMI = %f\nBMI Category : Underweight", bmi);
    else if(bmi>=18.6 && bmi<=24.9)
             printf("\nBMI = %f\nBMI Category : Ideal", bmi);
    else if(bmi>=25 && bmi<=29.9)
             printf("\nBMI = %f\nBMI Category : Overweight", bmi);
    else if(bmi>=30 && bmi<=39.9)
             printf("\nBMI = %f\nBMI Category : Obese", bmi);
    else if(bmi>=40)
             printf("\nBMI = %f\nBMI Category : Morbidly Obese", bmi);
            
    return 0;
}