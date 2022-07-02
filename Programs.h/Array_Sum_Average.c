#include <stdio.h>
int main()
{
    int i,n,sum=0,a[100];
    float av;
     printf("\nEnter the size of the array : ");
     scanf("%d",&n);

     printf("\nEnter the elements :\n");
      for(i=0;i<n;i++)
      {
          scanf("%d",&a[i]);
          sum=sum+a[i];
      }

      av=sum/(float)n;

      printf("\nSum of the elements = %d\nAverage = %f",sum,av);

      return 0;
}