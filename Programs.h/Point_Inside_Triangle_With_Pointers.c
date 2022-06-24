#include <stdio.h>
#include <math.h>
double dis(double ,double ,double ,double );
double area(double ,double ,double ,double,double,double );
int lies(double ,double ,double ,double ,double ,double ,double ,double );
int main()
{
    double x,y,x1,x2,x3,y1,y2,y3;
    int r;
    printf("\nEnter the co-ordinates of vertex 1:\n");
    scanf("%lf%lf",&x1,&y1);
    printf("\nEnter the co-ordinates of vertex 2:\n");
    scanf("%lf%lf",&x2,&y2);
    printf("\nEnter the co-ordinates of vertex 3:\n");
    scanf("%lf%lf",&x3,&y3);
    printf("\nEnter the co-ordinates of point P:\n");
    scanf("%lf%lf",&x,&y);

    r=lies(x,x1,x2,x3,y,y1,y2,y3);
    printf("\nDoes the point lies inside a triangle ?\n%d",r);

    return 0;
}

int lies(double x,double x1,double x2,double x3,double y,double y1,double y2,double y3)
{
    double ar,ar1,ar2,ar3,s;

    ar=area(x1,x2,x3,y1,y2,y3);
    ar1=area(x,x1,x2,y,y1,y2);
    ar2=area(x,x2,x3,y,y2,y3);
    ar3=area(x,x3,x1,y,y3,y1);
    
    s=ar1+ar2+ar3;
    
    if((float)ar==(float)s)k
           return 1;
    else
        return 0;
}

double area(double x1,double x2,double x3,double y1,double y2,double y3)
{
    double a,b,c,s,ar;

    a=dis(x1,x2,y1,y2);
    b=dis(x2,x3,y2,y3);
    c=dis(x1,x3,y1,y3);

    s=(a+b+c)/2;

    ar=sqrt(s*(s-a)*(s-b)*(s-c));
    
    return ar;
}

double dis(double x1,double x2,double y1,double y2)
{
    double d;
    d=sqrt(pow(x1-x2,2)+pow(y1-y2,2));

    return d;
}