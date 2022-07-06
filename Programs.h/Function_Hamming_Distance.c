#include <stdio.h>
int hamming(int ,int);
int main()
{
    int a,b;

    printf("\nEnter the number a and b respectively :\n");
     scanf("%d%d",&a,&b);

    printf("\nHamming Distance between number %d and %d = %d",a,b,hamming(a,b));

    return 0;
}

int hamming(int a,int b)
{
    int d=0;

    while(a!=0 || b!=0)
    {
        if(a%2!=b%2)
           d++;
        
        a/=2;
        b/=2;
    }

    return d;
}