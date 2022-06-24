#include <stdio.h>
#include <math.h>
void function(int *,int *,int *,int *,int *,int *,float *,double *);
int main()
{
    int a,b,c,d,e,s;

    float av;
    double sd;

    printf("\nEnter any five integers :\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    function(&a,&b,&c,&d,&e,&s,&av,&sd);

    printf("\nSum = %d",s);
     printf("\nAverage = %f",av);
    printf("\nStandard Deviation = %lf",sd);

    return 0;
}

void function(int *a,int *b,int *c,int *d,int *e,int *s,float *av,double *sd)
{
    double x;

    *s=*a+*b+*c+*d+*e;

    *av=*s/5.0;

    x=pow(*a-*av,2.0)+pow(*b-*av,2.0)+pow(*c-*av,2.0)+pow(*d-*av,2.0)+pow(*e-*av,2.0);

    *sd=sqrt((1.0/5.0)*x);
}