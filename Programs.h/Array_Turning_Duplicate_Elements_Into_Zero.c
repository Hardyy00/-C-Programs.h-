#include <stdio.h>
#define size 100
int main()
{
    int a[size],b[size]={0},i,max,n,j;
   printf("\nEnter the size of the array : ");
   scanf("%d",&n);

   printf("\nEnter the elements :\n");
   for(i=0;i<n;i++)
      scanf("%d",&a[i]);

    printf("\nElements are :\n");
    for(i=0;i<n;i++)
       printf("%d\n",a[i]);

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
          {
              for(j=0;j<n;j++)
              {
                  if(a[j]==i)
                     a[j]=0;
              }
          }
    }

    printf("\nAfter deleting duplicate elements, elements are :\n");
    for(i=0;i<n;i++)
      printf("%d\n",a[i]);

      return 0;
}