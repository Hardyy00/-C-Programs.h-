#include <stdio.h>
int main()
{
    int num,limit,p=0,z=0,n=0;
    printf("\nEnter the limit : ");
    scanf("%d", &limit);

    printf("Enter any %d numbers :\n", limit);
    
    while(limit>0)
    {
      scanf("%d", &num);

      if(num>0)
              p++;
      if(num==0)
              z++;
      if(num<0)
              n++;

      limit--;       
    }

    printf("Positive numbers = %d\nNegative numbers = %d\nZeros = %d", p, n, z);
    
  
    return 0; 
}