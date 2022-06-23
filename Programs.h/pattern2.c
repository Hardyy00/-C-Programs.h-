#include <stdio.h>
int main()
{
    int i,j,space,k=1,tot_row=5;

    for(i=0;i<=4;i++)
    {
       
       for(space=1;space<=tot_row-i;space++)
       {
           printf("  ");
       }
       
       for(j=0;j<=i;j++)
       {
           if(j==0 || i==0)
                           k=1;
            else 
                k=k*(i-j+1)/j;

            printf(" %3d", k);
       }

             printf("\n");
    }

         
    return 0;
}