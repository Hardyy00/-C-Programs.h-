#include <stdio.h>
int main()
{
    int i,j;
    printf("\n12 Midnight");
    
    for(i=1;i<=12;i++)
    {
       if(i>=1 && i<=11)
                         printf("\n%d AM", i);
       else if(i==12)
                      printf("\n%d Noon", i);
              
    } 
    
    for(j=1;j<=11;j++)
                      printf("\n%d pm", j);
   
    return 0;
}