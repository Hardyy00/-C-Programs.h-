#include <stdio.h>
void primefactor(int);
int main()
{
    int num;

    printf("\nEnter any number : ");
    scanf("%d",&num);

    primefactor(num);

    return 0;
}

   void primefactor(int num)
   {
       int i,j;

       for(i=1;i<=num;i++)
       {
           if(num%i==0)
              {
                 for(j=2;j<=i-1;j++)
                    {
                       if(i%j==0)
                          break;
                    } 
                if(j==i)
                  printf("%d\n",i);
              }
       }
   }