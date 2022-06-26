#include <stdio.h>
#include <math.h>
int main()
{
     int i,j,max,r;
     float el[100][3],ar[100];


     printf("\nEnter the number of plots : ");
     scanf("%d",&r);

     for(i=0;i<r;i++)
     {
         ar[i]=1/2.0;

         printf("\nEnter the sides and angle between them respectively :\n");
         for(j=0;j<3;j++)
            {
                scanf("%f",&el[i][j]);
                 
               if(j<2)
                    ar[i]*=el[i][j];
                else
                    ar[i]*=sin(el[i][j]);
            }
               printf("\nArea of the traingle = %f",ar[i]);
     }

   
    max=ar[0];
    for(i=0;i<r;i++)
       if(max<ar[i])
         max=ar[i];

    printf("\nMaximum Area = %f",max);

    return 0;
}