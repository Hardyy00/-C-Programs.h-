#include <stdio.h>
int po(int ,int);
int main()
{
    int x,n,c;
    printf("\nEnter the value of x : ");
     scanf("%d",&x);

    printf("\nEnter the value of n : ");
      scanf("%d",&n);

    c=po(x,n);
    printf("%d to the power of %d is %d",x,n,c);

    return 0;
}

int po(int x,int n)
{
    int i,p=1;

    for(i=1;i<=n;i++)
        p=p*x;

    return p;
}