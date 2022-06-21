
#include <stdio.h>

int main()
{

    int num,a,b,c,d,e;
    int sum;
    printf("Enter a Five-Digit Number: \n");
    scanf("%d",&num);
    

    e=num%10;
    d=(num/10)%10;
    c=(num/100)%10;
    b=(num/1000)%10;
    a=(num/10000)%10;
        
    sum=a+b+c+d+e;
    
    printf("Sum of digits of %d = %d", num, sum );

    return 0;
}