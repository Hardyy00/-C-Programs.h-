#include <stdio.h>
int main()
{
    int n1,n2,i;
    printf("\nEnter the size of array 1 : ");
    scanf("%d",&n1);

    printf("\nEnter the size of array 2 : ");
    scanf("%d",&n2);

    int a[n1],b[n2],c[n1+n2];

    printf("\nEnter the elements of array 1 :\n");
    for(i=0;i<n1;i++)
        scanf("%d",&a[i]);

    printf("\nEnter the elements of array 2 :\n");
      for(i=0;i<n2;i++)
          scanf("%d",&b[i]);

    for(i=0;i<n1;i++)
      c[i]=a[i];

    for(i=0;i<n2;i++)
      c[n1+i]=b[i];

      printf("\nElements of array 3 are :\n");
      for(i=0;i<n1+n2;i++)
         printf("%d\n",c[i]);

         return 0;
}