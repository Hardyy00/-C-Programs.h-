#include <stdio.h>
int main()
{
    int i,j,a[100],p[100],num,d=0,n;

    printf("\nEnter the size of the array : ");
     scanf("%d",&n);

     printf("\nEnter the elements :\n");
       for(i=0;i<n;i++)
         scanf("%d",&a[i]);

    printf("\nEnter the element you want to delete : ");
    scanf("%d",&num);

    for(i=0;i<n;i++)
      if(a[i]==num)
         {
             p[d]=i;
             d++;
         }

    for(i=0;i<d;i++)
      {
          for(j=p[i]-i;j<n-1;j++)
             a[j]=a[j+1];

            n--;
      }

      printf("\nAfter deletion :\n");
        for(i=0;i<n;i++)
           printf("%d\n",a[i]);

           return 0;

}