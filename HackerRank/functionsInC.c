#include <stdio.h>

int max_of_four(int a,int b,int c,int d);
int main()
{
    int a,b,c,d,g;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    
    g=max_of_four(a,b,c,d);
    
    printf("%d",g);
    
    return 0;
    
} 

int max_of_four(int a,int b,int c,int d)
{
    if(a>b && a>c && a>d)
       return a;
    else if(b>c && b>a && b>d)
       return b;
    else if(c>a && c>b && c>d)
      return c;
    else
       return d;
}

