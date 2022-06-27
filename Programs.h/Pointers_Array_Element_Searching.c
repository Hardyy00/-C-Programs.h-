#include <stdio.h>
int main()
{
    int a[100],i,*p=a,num,n,pi,flag=0;

    printf("\nEnter the size of the array :\n");
       scanf("%d",&n);

    printf("\nEnter the elements :\n");
      for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("\nEnter the element you want to search : ");
     scanf("%d",&num);
      
       for(i=0;i<n;i++)
         if(*(p+i)==num)
             {
                 flag=1;
                 pi=i;
                 break;
             }

        if(flag=0)
          printf("\nElement doesn't exist");
        else
          printf("\nElement '%d' is  at position %d in the array",num,pi);

          return 0;

        
}