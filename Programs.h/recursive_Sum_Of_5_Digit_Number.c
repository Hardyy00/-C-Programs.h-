#include <stdio.h>
int rec(int x);
int main()
{
    int s,x;
    
    printf("\nEnter a Five digit number : ");
    scanf("%d",&x);

    s=rec(x);

    printf("\nSum of digits of number %d is %d",x,s);

    return 0;
}

int rec(int x)
{
    int s;

    if(x==0)
        return 0;
    else
        {
            s=x%10+rec(x/10);
            return s;
        }
}