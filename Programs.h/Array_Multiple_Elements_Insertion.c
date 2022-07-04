#include <stdio.h>
int main()
{
    int i,a[100],p[100],n,num[100],e,j;
    printf("\nEnter the size of the array :\n");
    scanf("%d",&n);

    printf("\nEnter the elements :\n");
     for(i=0;i<n;i++)
       scanf("%d",&a[i]);

     printf("\nEnter you many numbers you want to insert : ");
     scanf("%d",&e);

     printf("\nEnter %d values and postions (with respect to array) of the number that you want to insert :\n",e);
      for(i=0;i<e;i++)
      {
          printf("\nEnter the %d set :\n",i+1);
        scanf("%d%d",&num[i],&p[i]);
      }
    for(i=0;i<e;i++)
     {
         for(j=n-1;j>=p[i];j--)
              a[j+1]=a[j];

        a[p[i]]=num[i];

        n++;
     }

     printf("\nArray after insertion :\n");
     for(i=0;i<n;i++)
        printf("%d\n",a[i]);
         
         return 0;
}