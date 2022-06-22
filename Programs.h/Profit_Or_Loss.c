#include <stdio.h>
int main()
{ 
    float sp,cp,p,l;
    printf("\nEnter the selling price: \n");
    scanf("%f", &sp);
    printf("\nEnter the cost price: \n");
    scanf("%f", &cp);
    
    if(sp>cp)
           {
            p=sp-cp;
            printf("\nHe made a Profit of Rs.%f\n", p); 
           }
    else   
           {
             if(sp==cp)
                    printf("\nThere is no profit or loss\n");
             else
            { 
                l=cp-sp;
            printf("\nHe made a Loss of Rs.%f\n",l);
            }
          
           }

    return 0;
}