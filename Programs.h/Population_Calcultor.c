#include <stdio.h>
int main()
{
    int year=1,i;   
    float popul=100000;
   
    for(i=1;i<=10;i++)
    {   
        popul = popul - popul*0.1;   //10% of population 

       printf("\nPopulation %d year ago = %d" , year++, (int)popul);

    }
   
    return 0;
}