#include <stdio.h>
int main()
{
   int size,i,n=0;
   printf("\nEnter the size of the array : ");
   scanf("%d",&size);

   int a[size];

   printf("\nEnter the elements :\n");
   for(i=0;i<size;i++)
        scanf("%d",&a[i]);

    for(i=0;i<size;i++)
        {
            if(a[i]<0)
                n++;
        }

        printf("Number of negative elements = %d",n);

        return 0;
}