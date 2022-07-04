#include <stdio.h>
int main()
{
     int a[100],i,j,r,n,swap;
     printf("\nEnter the size of the array : ");
       scanf("%d",&n);

       printf("\nEnter the elements :\n");
        for(i=0;i<n;i++)
          scanf("%d",&a[i]);

        printf("\nEnter the number of left rotation : ");
          scanf("%d",&r);

        for(i=0;i<r;i++)
         {
             swap=a[0];
              for(j=0;j<n-1;j++)
                a[j]=a[j+1];
            
              a[n-1]=swap;
         }

         printf("\nAfter %d left rotations :\n",r);
          for(i=0;i<n;i++)
            printf("%d ",a[i]);

            return 0;
}