#include <stdio.h>
int main()
{
    int a,b,c;

    int *p=&a,*q=&b,*r=&c;

    printf("\nEnter the values of a , b & respectively :\n");
     scanf("%d%d%d",&a,&b,&c);

     if(*p>*q && *p>*r)
       printf("Greatest element is %d",*p);
     else if(*q>*p && *q>*r)
        printf("\nGreates elemet is %d",*q);
      else if(*r>*p && *r>*q);
        printf("\nGreatest Element is %d",*r);

        return 0;

}