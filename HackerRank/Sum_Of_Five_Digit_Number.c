#include <stdio.h>
int main()
{
    int num,n,i,sum=0;
    scanf("%d",&n);
    
    while(n>0)
    {
        num=n%10;
        n=n/10;
        
        sum=sum+num;
    }
    
    printf("%d",sum);
    
    return 0;
}
