#include <stdio.h>
int main()
{
   int i,j,r,c;
   printf("\nEnter the odd number of rows and odd number of columns respectively :\n");
   scanf("%d%d",&r,&c);

   for(i=0;i<=r-1;i++)
   {
      for(j=1;j<=c;j++)
      {
          if(j==(1+i) || j==(c-i))
                     printf("1 ");
          else  
              printf("0 ");
      }
         printf("\n");
   }
       return 0;
}