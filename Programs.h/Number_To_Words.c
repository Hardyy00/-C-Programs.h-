#include <stdio.h>
int main()
{
   int num,num1,num2,rn=0;
   printf("\nEnter any number : ");
   scanf("%d",&num);
   
   num2=num;

   while(num>0)
   {
      num1=num%10;
      num=num/10;

      rn=rn*10+num1;
   }

    num=num2;
   while(rn>0)
   {
      num1=rn%10;
      rn=rn/10;

      switch(num1)
      {
         case 0:
                 printf("Zero ");
                 break;
         case 1:
                printf("One ");
                break;
         case 2:
                 printf("Two ");
                 break;
         case 3:
                  printf("Three ");
                  break;
          case 4:
                  printf("Four ");
                  break;
          case 5:
                  printf("Five ");
                  break;
          case 6:
                  printf("Six ");
                  break;
          case 7:
                  printf("Seven ");
                  break;
          case 8:
                  printf("Eight ");
                  break;
          case 9:
                  printf("Nine ");
      }
        
   } 
      return 0;
}