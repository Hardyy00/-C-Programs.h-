#include <stdio.h>
#include <math.h>
int main()
{
    int n,i,a[100];
    float av,sd,sum=0;

    printf("\nEnter the size of the array : ");
    scanf("%d",&n);

    printf("\nEnter the elements :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
          sum=sum+a[i];
    }

    av=sum/n;
    sum=0;
   
    for(i=0;i<n;i++)
    {
        sum=sum+pow(a[i]-av,2.0);
    }
     sd=sqrt((1.0/n)*sum);

     printf("\nStandard deviation = %f",sd);

     return 0;

}
