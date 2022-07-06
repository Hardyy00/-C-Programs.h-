#include <stdio.h>
#include <math.h>
int game(int );
int main()
{
    int num;
    printf("\nEnter the number : ");
    scanf("%d",&num);

    printf("\nNumber next to %d which is a prime number as well as palindrome = %d",num,game(num));

    return 0;
}

int game(int num)
{
    int i=num,j,flag1,flag2,num1,palin,num2,d;

    while(1)
    {
        i++;
        flag1=0;
        flag2=0;
        palin=0;

        for(j=2;j<=i-1;j++)
            if(i%j==0)
               break;

        if(j==i)
             flag1=1;

        d=log10(i);
        num1=i;
        
        for(j=0;num1!=0;j++)
        {
            palin= palin+num1%10*pow(10,d-j);
            num1/=10;
        }

          if(palin==i)
              flag2=1;

            if(flag1==1 && flag2==1)
               {
                   num2=i;
                    break;
               }
    }
        return num2;
}