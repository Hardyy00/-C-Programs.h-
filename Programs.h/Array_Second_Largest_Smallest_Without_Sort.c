#include <stdio.h>
int main()
{
    int i,n,a[100],max,min,max2,min2;
    printf("\nEnter the size of the array : ");
    scanf("%d",&n);

    printf("\nEnter the array elements :\n");
     for(i=0;i<n;i++)
       scanf("%d",&a[i]);

    max=min=a[0];
     for(i=0;i<n;i++)
      {
          if(max<a[i])
            max=a[i];
          if(min>a[i])
            min=a[i];
      }

    max2=a[1];
    min2=a[1];
      for(i=0;i<n;i++)
        {
            if(max2<a[i] && a[i]<max)
               max2=a[i];
            if(min2>a[i] && a[i]>min)
               min=a[i];
        }

       printf("\nSecond Largest number = %d",max2);
       printf("\nSecond Smallest number = %d",min2);
       return 0;
}