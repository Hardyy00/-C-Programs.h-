#include <stdio.h>
int main()
{
    int size,i,d=0;
    printf("\nEnter the size of the array : ");
    scanf("%d",&size);

    int a[size];

    printf("\nEnter the elements :\n");
    for(i=0;i<size;i++)
      scanf("%d",&a[i]);

   printf("\nNegative elements are :\n");
    for(i=0;i<size;i++)
        {
            if(a[i]<0)
               {
                    printf("%d\n",a[i]);
                    d++;
               }
        }
    
    printf("Count of negative elements = %d",d);

    return 0;
}