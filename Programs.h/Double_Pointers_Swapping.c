#include <stdio.h>
int main()
{
    int a,b,z;
    int *x=&a,*y=&b,**p=&x,**q=&y;

    printf("\nEnter the values of a and b respectively :\n");
      scanf("%d%d",&a,&b);

    z=**p;
    **p=**q;
    **q=z;

      printf("\nAfter swapping :\n");
        printf("a = %d\nb = %d",**p,**q);
}