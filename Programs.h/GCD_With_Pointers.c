#include <stdio.h>
int gcd(int ,int );
int main()
{
    int x,y,g;

    printf("\nEnter any two number :\n");
    scanf("%d%d",&x,&y);

   g=gcd(x,y);

   printf("\nGreatest common divisor of %d and %d is %d",x,y,g);

   return 0;

}

int gcd(int x ,int y)
{
    int a,b;
   
   while(b>0)
    {
        a=x/y;
      b=x-a*y;
         if(b==0)
             break;
        x=y;
       y=b;
    }

       return y;
}