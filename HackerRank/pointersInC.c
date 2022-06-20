#include <stdio.h>
#include <stdlib.h>

void update(int *,int *);
int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    
    update(&a,&b);
    
    printf("%d\n%d",a,b);
    
    return 0;
}

void update(int *a,int *b)
{
   int s,d;
   s=*a + *b;
   d=abs(*a - *b);
   
   *a=s;
   *b=d;
    
}
