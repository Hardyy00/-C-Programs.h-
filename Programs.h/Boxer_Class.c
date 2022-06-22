#include <stdio.h>
int main()
{
    float wt;
    printf("\nEnter the weight of a boxer (in pounds) : ");
    scanf("%f", &wt);

    if( wt<115 )
               printf("\nBoxer Class = Flyweight");
    else if( wt>=115 && wt<=121 )
               printf("\nBoxer Class = Bantamweight");
    else if( wt>=122 && wt<=153 )
               printf("\nBoxer Class = Featherweight");
    else if( wt>=154 && wt<=189 )
               printf("\nBoxer Class = Middleweight");
    else if( wt>=190 )
               printf("\nBoxer Class = Heavyweight");

    return 0;
}