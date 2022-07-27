#include <stdio.h>
#define size 100
int main()
{
    int a[size],b[size]={0},max,i,d=0,n;
    printf("\nEnter the size of array : ");
    scanf("%d",&n);

    printf("\nEnter the elements :\n");
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);

      max=a[0];
      for(i=0;i<n;i++)
        {
            if(max<a[i])
               max=a[i];
        }

        max++;

        for(i=0;i<n;i++)
        {
            b[a[i]]++;
        }

        for(i=0;i<max;i++)
            {
                if(b[i]>1)
                  d++;
            }

            printf("\nTotal number of duplicate elements = %d",d);

    return 0;
}