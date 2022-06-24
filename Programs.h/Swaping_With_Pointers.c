#include <stdio.h>
void shift(int *,int *,int *);
int main()
{
    int x,y,z;
    printf("\nEnter any three numbers :\n");
    scanf("%d%d%d",&x,&y,&z);

    printf("\nBefore shifting :\nX = %d Y = %d Z = %d\n",x,y,z);

    shift(&x,&y,&z);

    printf("After shifting :\nX = %d Y = %d Z = %d",x,y,z);
 
    return 0;
}

void shift(int *x,int *y,int *z)
{
    int p;

    p=*y;
    *y=*x;
    *x=*z;
    *z=p;
}
