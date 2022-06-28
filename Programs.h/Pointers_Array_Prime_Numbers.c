#include <stdio.h>
int main()
{
    int a[100],i,j,n,*p=a;

    printf("\nEnter the size of the array : ");
      scanf("%d",&n);

    printf("\nEnter the elements :\n");
      for(i=0;i<n;i++)
        scanf("%d",p+i);

    for(i=0;i<n;i++)
    {
        for(j=2;j<=*(p+i)-1;j++)
          if(*(p+i)%2==0)
              break;

        if(j==*(p+i))
              printf("\n%d : prime number",*(p+i));
        else
           printf("\n%d : Not a prime number",*(p+i));

    }

    return 0;
}