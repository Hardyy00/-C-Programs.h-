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
        if((i+j)%2==0)
                 printf("1 ");
        else 
            printf("0 ");
             
     }
         printf("\n");
   }
        return 0;
}