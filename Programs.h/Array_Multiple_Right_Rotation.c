#include <stdio.h>
int main()
{
    int i,j,a[100],r,n,swap;

    printf("\nEnter the size of the array : ");
     scanf("%d",&n);

     printf("\nEnter the elements :\n");
       for(i=0;i<n;i++)
         scanf("%d",&a[i]);

    printf("\nEnter the number of right rotation : ");
      scanf("%d",&r);

      for(i=0;i<r;i++)
        {
            swap=a[n-1];

            for(j=n-1;j>=0;j--)
              a[j+1]=a[j];

            a[0]=swap;
        }

    printf("\nAfter %d right rotation :\n",r);
     for(i=0;i<n;i++)
       printf("%d ",a[i]);

       return 0;
}