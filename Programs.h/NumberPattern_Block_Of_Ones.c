#include <stdio.h>
int main()
{
   int i,j,c,r;
   printf("\nEnter number of rows and columns respectively :\n");
   scanf("%d%d",&r,&c);
   
   for(i=1;i<=r;i++)
   {
      for(j=1;j<=c;j++)
      {
          printf("1 ");
      }
      printf("\n");
   }
       return 0;
}
