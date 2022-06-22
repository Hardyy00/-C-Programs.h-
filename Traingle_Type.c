#include <stdio.h>
int main()
{
    float side1,side2,side3,a,b,c;
    printf("\nEnter the side 1 of a triangle: ");
    scanf("%f", &side1);
    printf("\nEnter the side 2 of a triangle: ");
    scanf("%f", &side2);
    printf("\nEnter the side 3 of a triangle: ");
    scanf("%f", &side3);

    if( (side1==side2 && side2!=side3) || (side2==side3 && side3!=side1) || (side1==side3 && side3!=side2) )
                   printf("\nIsosceles triangle");
    if ( side1==side2 && side2==side3 )
                   printf("\nEquilateral triangle");
    if ( side1!=side2 && side2!=side3 && side3!=side1 )
                   printf("\nScalene triangle");
    a=side1*side1==side2*side2+side3*side3;
    b=side2*side2==side1*side1+side3*side3;
    c=side3*side3==side1*side1+side2*side2;

    if( a || b || c )
                    printf("\nRight-angled triangle");
       
    return 0;
}
