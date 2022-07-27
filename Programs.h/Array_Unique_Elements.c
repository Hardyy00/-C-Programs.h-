#include <stdio.h>
#define size 100
int main()
{
    int a[size],b[size]={0},max,i,n;
    printf("\nEnter the size of the array : ");
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

      printf("\nUnique elements are :\n");
      for(i=0;i<max;i++)
      {
          if(b[i]==1)
             printf("%d\n",i);
      }
        
        return 0;
}
