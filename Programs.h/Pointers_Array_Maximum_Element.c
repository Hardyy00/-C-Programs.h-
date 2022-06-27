#include <stdio.h>
int main()
{
    int a[100],i,n,max,*p=a;
     int pi;

    printf("\nEnter the size of the array : ");
      scanf("%d",&n);

    printf("\nEnter the elements :\n");
      for(i=0;i<n;i++)
        scanf("%d",p+i);

    max=*p;
    for(i=0;i<n;i++)
      if(max<*(p+i))
          {
              max=*(p+i);
              pi=i;
          }

    printf("\nMaximum element = %d\nPosition of Maximum element = %d",max,pi);

    return 0;


}