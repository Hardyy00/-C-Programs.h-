#include <stdio.h>
int main()
{
    int i,a[100],b[100]={0},max,n;
    printf("\nEnter the size of the array : ");
     scanf("%d",&n);

    printf("\nEnter the elements :\n");
      for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    max=a[0];

    for(i=0;i<n;i++)
      if(max<a[i])
         max=a[i];

    max++;

    for(i=0;i<n;i++)
      b[a[i]]++;

    for(i=0;i<max;i++)
       if(b[i]>0)
          printf("\nFrequency of %d = %d",i,b[i]);

          return 0;
}