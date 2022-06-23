#include <stdio.h>
#include <math.h>
int main()
{
    int i , x ;
    float sum=0 , part_1 , part_2 ;       //dividing series in 2 parts
    
    printf("Enter a value of x : ") ;
    scanf("%d", &x) ;
    
    part_1 = (x-1.0)/x;
    sum = part_1;

    for( i=2 ; i<=7 ; i++ )
    {
       
       part_2 = (1.0/2.0)*pow((x-1.0)/x,i);
       
       sum = sum + part_2 ;

    }

          printf("log( %d ) = %f", x, sum) ;
   
    return 0;
}