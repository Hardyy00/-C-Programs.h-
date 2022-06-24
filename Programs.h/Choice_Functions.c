
#include <stdlib.h>
int main()
{
    int fact,i,num,j;

    while(1)
    {

        fact = 1;
        i = 1;
        
        printf("\nFunctions :\n");
        printf("\n1. Factorial of a number ");
        printf("\n2. Prime or not");
        printf("\n3. Odd or even");
        printf("\n4. Exit");

        printf("\nEnter the order number of the function you want : ");
        scanf("%d", &num);

        if(num<1 || num>4)
                  {
                      printf("\nYou entered a wrong number. Please try again.");
                      continue;
                  }
                  
        switch(num)
        {
            case 1 :
            {
                printf("\nEnter the number you want factorial of : ");
                scanf("%d", &j);

                for(i=1;i<=j;i++)
                {
                    fact = fact * i;
                }
                
                printf("\nFactorial of %d is %d", j, fact);

                continue;
            }
            
            case 2 :
            {
                printf("\nEnter the number : ");
                scanf("%d", &j);

                for(i=2;i<=j-1;i++)
                {
                   if(j%i==0)
                            { 
                              printf("\nIts not a prime number");
                              break;
                            }

                }
                   if(j==i)
                           printf("\nIts a prime number");
                   continue;
                
            }

            case 3 :
            {
              printf("\nEnter the number : ");
              scanf("%d", &j);

              if(j%2==0)
                       printf("\nIts an even number");
              else 
                  printf("\nIts an odd number");

              continue;
            }

            case 4: 
                   exit(1);
        }

    }
    return 0;
}