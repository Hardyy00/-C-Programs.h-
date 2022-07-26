#include <stdio.h>
int main()
{
    int size,i,max,sl;
    printf("\nEnter the size of the array : ");
    scanf("%d",&size);

    int a[size];

    printf("\nEnter the elements :\n");
      for(i=0;i<size;i++)
         scanf("%d",&a[i]);
     
    max=a[0];
    sl=a[0];

    for(i=0;i<size;i++)
      {
          if(max<a[i])
             max=a[i];   
      }
    
     for(i=0;i<size;i++)
     {
       if(sl<a[i] && a[i]<max)
           sl=a[i];
     }
         printf("Second largest number = %d",sl);

         return 0;
}