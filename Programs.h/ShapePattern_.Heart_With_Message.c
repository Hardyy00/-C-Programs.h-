#include <stdio.h>
int main()
{
    int i,j,space;

    for(i=1;i<=3;i++)
    {
        for(space=1;space<=3-i;space++)
            printf(" ");
        
        for(j=1;j<=5+(i-1)*2;j++)
            printf("*");

       for(space=1;space<=5-(i-1)*2;space++)
            printf(" ");
       
       for(j=1;j<=5+(i-1)*2;j++)
             printf("*");
        
        printf("\n");
    }
       
       for(i=1;i<=10;i++)
       {
           for(space=1;space<=i-1;space++)
               printf(" ");
           
           for(j=1;j<=19-(i-1)*2;j++)
             {
               if(i==1 && (j>=6 &&j<=15))
                  {
                      switch(j)
                      {
                          case 6: printf("C");
                                  break;
                          case 7: printf("o");
                                  break;
                          case 8: printf("d");
                                  break;
                          case 9: printf("e");
                                    break;
                          case 10: printf("f");
                                   break;
                          case 11: printf("o");
                                   break;
                          case 12: printf("r");
                                    break;
                          case 13: printf("w");
                                   break;
                          case 14: printf("i");
                                   break;
                          case 15: printf("n");
                      }
                  }
                else
                     printf("*");
           }
           printf("\n");
       }
          return 0;
}