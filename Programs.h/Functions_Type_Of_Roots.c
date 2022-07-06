#include <stdio.h>
void quad(int ,int ,int);
int main()
{
    int a,b,c;
    printf("\nEnter the coefficients a ,b,c respectively:\n");
       scanf("%d%d%d",&a,&b,&c);

    quad(a,b,c);

    return 0;
}

void quad(int a,int b,int c)
{
    int d;

    d=b*b-4*a*c;
    if(d>0)
       printf("\nRoots are real and unequal");
    else if(d==0)
       printf("\nRoots are real and equal");
    else 
        printf("\nRoots are imaginary");

    
}