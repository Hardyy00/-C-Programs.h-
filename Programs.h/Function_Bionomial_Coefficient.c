#include <stdio.h>
float bc(int ,int);
int main()
{
    int k,n;
    
     printf("\nEnter the value of n : ");
      scanf("%d",&n);

    printf("\nEnter the value of k : ");
      scanf("%d",&k);

    printf("\nBinomial coefficient = %f",bc(n,k));

    return 0;
}

float bc(int n,int k)
{
    float b;
    int x=1,y=1,z=1,i;

    for(i=1;i<=n;i++)
        x=x*i;

    for(i=1;i<=k;i++)
        y=y*i;

    for(i=1;i<=n-k;i++)
        z=z*i;

    b= x/(float)(y*z);

    return b;
}
