#include <stdio.h>
int main()
{
    int i,n,m;
    printf("\nEnter the starting roll no. and ending roll no. :\n");
      scanf("%d%d",&m,&n);

    int a[n-m+1];

     printf("\nRoll no. from %d to %d are :\n",m,n);
     for(i=0;i<n-m+1;i++)
     {
          a[i]=m+i;
       printf("%d\n",a[i]);
     }

       return 0;

    
}