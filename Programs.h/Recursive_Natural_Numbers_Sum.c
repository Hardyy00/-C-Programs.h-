#include <stdio.h>
int sum(int );
int main()
{
    int t,s;
    printf("\nEnter the number of terms you want sum of : ");
    scanf("%d",&t);

    s=sum(t);

    printf("\nSum of first %d natural number = %d",t,s);

    return 0;
}

int sum(int t)
{
    int s;
    if(t==1)
         return 1;
    else
        {
            s=t+sum(t-1);
            return s;
        }
}