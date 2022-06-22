#include <stdio.h>
int main()
{
    int yr;
    printf("\nEnter the Year: ");
    scanf("%d", &yr);

    if(yr%100==0)
               {
                if(yr%400==0)
                            printf("\nIts a leap year.\n");
                else
                    printf("\nIts not a leap year.\n");
               } 
    else
        {if(yr%4==0)
              printf("\nIts a leap year.\n");
         else
              printf("\nIts not a leap year.\n");
        }
    
    return 0;
}