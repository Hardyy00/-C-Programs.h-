#include <stdio.h>
#include <stdlib.h>
void f1();
void f2(int );
int f3();
int f4(int);
int main()
{
    int i,num;
    while(1)
    {
        printf("\nChoose any one :\n");
        printf("\n1.Function of no return type and no argument");
        printf("\n2.Function of no return type and argument");
        printf("\n3.Function of return type and no argument");
        printf("\n4.Function of return type and argument");
        printf("\n5.Exit");
        printf("\nEnter your choice : ");
        scanf("%d",&i);

        switch(i)
        {
            case 1 :  f1();
                       break;
            case 2 : 
                   printf("\nEnter the number : ");
                     scanf("%d",&num);
                    f2(num);
                    break;
            case 3: 
                printf("\nFactorial = %d",f3());
                 break;

            case 4: 
                printf("\nEnter the number : ");
                    scanf("%d",&num);
                printf("\nFactorial = %d",f4(num));
                          break;

            case 5 :
                 exit(1);
        }
    }
}

void f1()
{
   int f=1,i,num;
    printf("\nEnter the number : ");
      scanf("%d",&num);
    
    for(i=1;i<=num;i++)
       f=f*i;

    printf("\nFactorial of %d is %d",num,f);
}

void f2(int num)
{
    int f=1,i;

    for(i=1;i<=num;i++)
       f=f*i;

    printf("\nFactorial of %d is %d",num,f);
}

int f3()
{
    int f=1,num,i;

    printf("\nEnter the number : ");
     scanf("%d",&num);

     for(i=1;i<=num;i++)
       f=f*i;

    return f;
}

int f4(int num)
{
    int i,f=1;

    for(i=1;i<=num;i++)
       f=f*i;

    return f;
}