#include <stdio.h>
#include <math.h>
void pal(int *);
int main()
{
    int num;

    printf("\nEnter a number : ");
      scanf("%d",&num);

    pal(&num);

}

void pal(int *num)
{
   int n=*num,x,sum=0;

   while(n>0)
   {
       x=n%10;
       n/=10;

       sum=sum*10+x;
   }

   if(sum==*num)
      printf("\nIt is a palindrome number");
    else
       printf("\nIts not a palindrome number");
}