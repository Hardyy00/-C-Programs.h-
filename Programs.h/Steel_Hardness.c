#include <stdio.h>
int main()
{
   float hard,cc,ts;
   
   printf("\nEnter the Hardness of steel: ");
   scanf("%f", &hard );
   printf("\nEnter the Carbon content of steel: ");
   scanf("%f", &cc);
   printf("\nEnter the Tensile strength of steel: ");
   scanf("%f", &ts);

    if( hard>50 && cc<0.7 && ts>5600)
            printf("\nIts a Grade 10 steel");
    else if( hard>50 && cc<0.7 && ts<=5600 )
            printf("\nIts a Grade 9 steel");
    else if( hard<=50 && cc<0.7 && ts>5600)
            printf("\nIts a Grade 8 steel");
    else if( hard>50 && cc>=0.7 && ts>5600)
            printf("\nIts a Grade 7 steel");
    else if( hard>50 || cc<0.7 || ts>5600)
            printf("\nIts a Grade 6 steel");
    else if( hard<=50 && cc>=0.7 && ts<=5600)
            printf("\nIts a Grade 5 steel");

    return 0;
}