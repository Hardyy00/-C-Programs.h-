#include <math.h>
#include <stdio.h>

int main()
{   
    float ang,a,b,c,d,e,f;
    printf("\nEnter the angle A in radian: \n");
    scanf("%f", &ang);

    a=sin(ang);
    b=cos(ang);
    c=tan(ang);
    d=1/a;
    e=1/b;
    f=1/c;

    printf("\nSin(A)=%f\n",a);
    printf("\nCos(A)=%f\n",b);
    printf("\nTan(A)=%f\n",c);
    printf("\nCosec(A)=%f\n",d);
    printf("\nSec(A)=%f\n",e);
    printf("\nCot=%f\n",f);

    return 0;
}