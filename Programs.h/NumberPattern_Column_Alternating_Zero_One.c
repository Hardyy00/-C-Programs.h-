#include <stdio.h>
int main()
{
   int i,j,r,c;
   printf("\nEnter the number of rows and columns respectively :\n");
   scanf("%d%d",&r,&c);

   for(i=1;i<=r;i++)
   {
       for(j=1;j<=c;j++)
       {
         if(j%2==1)
                printf("0 ");
         else  
            printf("1 ");
       }
          printf("\n");
   }
         return 0;
}