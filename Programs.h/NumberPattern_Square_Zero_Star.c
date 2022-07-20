#include <stdio.h>
int main()
{
   int i,j,r,c;
   printf("\nEnter the number of rows ad columns :\n");
   scanf("%d%d",&r,&c);

   for(i=1;i<=r;i++)
   {
       for(j=1;j<=c;j++)
       {
           if(i==1 || i==r)
                {
                    if(j==1 || j==c)
                          printf("0 ");
                    else 
                        printf("1 ");
                }
            else
                {
                    if(j==1 || j==c)
                           printf("1 ");
                    else 
                        printf("0 ");
                }
       }
         printf("\n");
   }
        return 0;
}