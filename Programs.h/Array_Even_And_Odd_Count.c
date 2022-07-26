#include <stdio.h>
int main()
{
    int size,i,e=0,o=0;
    printf("\nEnter the size of the array : ");
    scanf("%d",&size);

    int  a[size];

    printf("\nEnter the elements :\n");
      for(i=0;i<size;i++)
         scanf("%d",&a[i]);

    for(i=0;i<size;i++)
    {
        if(a[i]%2==0)
            e++;
        else
            o++;
    }

    printf("\nNumber of even elements = %d",e);
    printf("\nNumber of odd elements = %d",o);

    return 0;
}