#include <stdio.h>
int main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i==1)
               printf("%3d",j);
            
            else if(j==5)
               printf("%3d",j+(i-1));

            else if(j==1)
               printf("%3d",16-(i-2));

           else if(i==5)
               printf("%3d",13-(j-1));

            else if(i==2) 
               printf("%3d",16+(j-1));

            else if(j==2)
                 printf("%3d",24-(i-3));
            
            else if(j==3)
                  printf("%3d",25-(i-3)*3);
            else if(j==4)
                  printf("%3d",20+(i-3));
        }
          printf("\n");
    }
       return 0;
}