#include <stdio.h>
int main()
{
     int a[100],n,i,sum=0;

    printf("\nEnter the size of the array : ");
      scanf("%d",&n);
    
    int *p[n];

    for(i=0;i<n;i++)
         p[i]=&a[i];

    printf("\nEnter the elements :\n");
       for(i=0;i<n;i++)
        {
         scanf("%d",p[i]);

         sum+=*p[i];

        }

    printf("\nSum of elements = %d",sum);

    return 0;

     
    
}