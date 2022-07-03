#include <stdio.h>
int main()
{
    int p1,p2,i,n,a[100],max,min,swap;
    printf("\nEnter the size of the array : ");
    scanf("%d",&n);

    printf("\nEnter the elements :\n");
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);

    max=min=a[0];

    for(i=0;i<n;i++)
       {
           if(max<a[i])
           {
               max=a[i];
               p1=i;
           }

            if(min>a[i])
            {  
                min=a[i];
               p2=i;
            }
       }
   

     swap=a[p1];
     a[p1]=a[p2];
     a[p2]=swap;

     printf("\nAfter swaping :\n");
     for(i=0;i<n;i++)
       printf("%d\n",a[i]);

       return 0;
 }