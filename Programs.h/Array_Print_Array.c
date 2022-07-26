#include <stdio.h>
int main()
{
    int size,i;
    printf("\nEnter the size of array : ");
    scanf("%d",&size);

    int a[size];

    printf("\nEnter the elements :\n");
    for(i=0;i<size;i++)
       scanf("%d",&a[i]);

   printf("\nElements are :\n");
   for(i=0;i<size;i++)
      printf("%d\n",a[i]);

      return 0;
}