#include <stdio.h>
#define size 100
int main()
{
    int a[size],i,p,num,n;
    printf("\nEnter the size of the array : ");
    scanf("%d",&n);

    printf("\nEnter the elements of the array :\n");
     for(i=0;i<n;i++)
         scanf("%d",&a[i]);

    printf("\nElements of the array are :\n");
     for(i=0;i<n;i++)
        printf("%d\n",a[i]);

    printf("\nEnter the position at which you want to insert a number : ");
    scanf("%d",&p);

    printf("\nEnter the number that you want to insert : ");
    scanf("%d",&num);

    for(i=n-1;i>=p-1;i--)
       a[i+1]=a[i];

       n++;

       a[p-1]=num;

       printf("\nElements of the array are :\n");
       for(i=0;i<n;i++)
          printf("%d\n",a[i]);

          return 0;



       return 0;
}