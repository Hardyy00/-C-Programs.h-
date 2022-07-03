#include <stdio.h>
int main()
{
    int i,j,n,a[100],swap;
    printf("\nEnter the size of the array : ");
    scanf("%d",&n);

    printf("\nEnter the elements :\n");
     for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
         {
              if(a[j]>a[j+1])
                 {
                     swap=a[j];
                     a[j]=a[j+1];
                     a[j+1]=swap;
                 }
         }
    }

       printf("\nAfter sorting in ascending order:\n");
        for(i=0;i<n;i++)
            printf("%d\n",a[i]);

            return 0;
}