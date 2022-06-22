#include <stdio.h>
int main()
{
    float a,b,c,gr;
    printf("\nEnter three numbers :\n");
    scanf("%f %f %f", &a, &b, &c);

    gr=a>b ? (a>c?a:c) : (b>c?b:c);
    
    printf("\n%f is the greatest number", gr);
    
    return 0;
}