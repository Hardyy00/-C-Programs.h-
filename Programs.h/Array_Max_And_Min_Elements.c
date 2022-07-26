#include <stdio.h>
int main()
{
    int size,i,max,min,b;

    printf("\nEnter the size of the array : ");
    scanf("%d",&size);

   int a[size];
   
    printf("\nEnter the elements :\n");
    for(i=0;i<size;i++)
       scanf("%d",&a[i]);

    b=a[0];
    for(i=0;i<size;i++)
    {
        if(b<a[i])
           max=a[i];
        
        if(b>a[i])
            min=a[i];
    }
       
       printf("Maximum element = %d\nMinimum elements = %d",max,min);
    
       return 0;
}