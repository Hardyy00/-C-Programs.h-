#include <stdio.h>
#include <math.h>
void area(float ,float , float ,float * );
int main()
{
    float a,b,c;
    float ar;

    printf("\nEnter the three sides of triangle :\n");
    scanf("%f%f%f",&a,&b,&c);

    area(a,b,c,&ar);

    printf("\nArea of triangle = %f",ar);

    return 0;
}

void area(float a,float b,float c,float *ar )
{
    float s;

    s=(a+b+c)/2;

    *ar = sqrt(s*(s-a)*(s-b)*(s-c));
}