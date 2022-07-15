#include <stdio.h>
int main()
{
   int num,d,num1,rn=0;
   printf("\nEnter any number : ");
   scanf("%d",&num);
   d=num;
   while(num>0)
   {
     num1=num%10;
     num=num/10;

     rn=rn*10+num1;
   }
    if(rn==d)
           printf("\nIts a palindrome number");
    else 
        printf("\nIts not a palindrome number");
     
     return 0;
}