#include <stdio.h>
void school(int ,int ,int ,float *,float *);
int main()
{
    int a,b,c;
    float av,p;

    printf("\nEnter the marks in three subjects :\n");
    scanf("%d%d%d",&a,&b,&c);

    school(a,b,c,&av,&p);

    printf("\nAverage marks = %f",av);
    printf("\nPercentage = %0.2f %%",p);

    return 0;
}

void school(int a,int b,int c,float *av,float *p)
{
    int sum;

    sum=a+b+c;

    *av=sum/3.0;

    *p=(sum/300.0)*100;
}
