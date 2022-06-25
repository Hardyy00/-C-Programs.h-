#include <stdio.h>
#include <math.h>
int be(int );
int main()
{
    int num,b; 
    printf("\nEnter any number : ");
    scanf("%d",&num);

    b=be(num);

    printf("\nBinary Equivalent of %d is %d",num,b);

    return 0;
}

int be(int num)
{
    int b;
    static int i=0;
     i++;
    if(num==0)
       return 0;
    else
       {
           b=pow(10,i-1)*(num%2)+be(num/2);
           return b;
       }
}