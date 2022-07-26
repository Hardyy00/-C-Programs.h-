#include <stdio.h>
int main()
{
    int size,i;
    printf("\nEnter the size  of the array : ");
    scanf("%d",&size);

    int a[size],b[size];

    printf("\nEnter the elements in array 1 :\n");
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);

    printf("\nElements in arrray 1 are :\n");
    for(i=0;i<size;i++)
        printf("%d\n",a[i]);

     for(i=0;i<size;i++)
     {
         b[i]=a[i];
     }

     printf("\nElements of array 2 are :\n");
     for(i=0;i<size;i++)
         printf("%d\n",b[i]);

         return 0;
}