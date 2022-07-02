#include <stdio.h>
int main()
{
    int n,i,a[100],o[100],e[100];
    int c1=0,c2=0;
    printf("\nEnter the size of the array : ");
    scanf("%d",&n);

    printf("\nEnter the elements :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

        if(a[i]%2==0)
           {
               e[c1]=a[i];
                 c1++;
           }
        else
           {
               o[c2]=a[i];
                  c2++;
           }
    }

    printf("\nEven elements :\n");
      for(i=0;i<c1;i++)
         printf("%d\n",e[i]);

    printf("\nOdd elements :\n");
       for(i=0;i<c2;i++)
          printf("%d\n",o[i]);

    return 0;

}