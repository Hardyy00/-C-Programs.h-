#include <stdio.h>
int main()
{
   int num,num1,num2,p=1;
   printf("\nEnter any number : ");
   scanf("%d", &num);

   num2=num;

    while(num>0)
    {
       num1=num%10;
       num=num/10;

       p=p*num1;
    }
   

      printf("\nProduct of the digits of the number %d is %d",num2,p);

      return 0;
}