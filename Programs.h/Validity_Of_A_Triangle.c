#include <stdio.h>
int main()
{
    float a,b,c;
    printf("\nEnter the three sides of a triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    if( (a>b && a>c) && (b+c>a) )
            printf("\nIts a valid triangle");
    else if( (b>a && b>c) && (a+c>b) )
            printf("\nIts a valid triangle");
    else if( (c>a && c>b) && (a+b>c) )
            printf("\nIts a valid triangle");
    else
        printf("\nIts an invalid triangle");

    return 0;
}