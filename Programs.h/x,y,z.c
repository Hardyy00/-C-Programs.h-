#include <stdio.h>
int main()
{
    int y;
    float i,x;
    
    for(y=1;y<=6;y++)
    {
        i=0;
        x=5.5;
       
       while(x<=12.5)
       {
           i=2+(y+0.5*x);
           printf("y=%d  x=%f  i=%f\n", y, x, i);
           x=x+0.5;
       }

    }
    return 0;
} 