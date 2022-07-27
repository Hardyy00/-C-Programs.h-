#include <stdio.h>
int main()
{
   int n,pos,i;
   printf("\nEnter the size of the array : ");
   scanf("%d",&n);

   int a[n];
   printf("\nEnter the elements of the array :\n");
     for(i=0;i<n;i++)
      scanf("%d",&a[i]);
   
   printf("\nElements in the array are :\n");
     for(i=0;i<n;i++)
        printf("%d\n",a[i]);

   printf("\nEnter the position at which you want to delete an element : ");
   scanf("%d",&pos);

   for(i=pos-1;i<n-1;i++)
    a[i]=a[i+1];                                  

    n--;

    printf("\nAfter deletion elements of the array are :\n");
    for(i=0;i<n;i++)
       printf("%d\n",a[i]);

       return 0;

}