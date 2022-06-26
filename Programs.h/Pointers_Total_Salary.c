#include <stdio.h>
int main()
{
    int *p,hrs,sal=10000;
    p=&sal;

    printf("\nEnter the working hours per day : ");
      scanf("%d",&hrs);

    if((hrs-10)<=5 && (hrs-10)>0)
        *p+=5000;
    else if((hrs-10)>=6 && (hrs-10)<=10)
        *p+=10000;

    else if((hrs-10)>=10)
        *p+=15000;

    printf("\nTotal salary = %d",sal);

    return 0;
              

}