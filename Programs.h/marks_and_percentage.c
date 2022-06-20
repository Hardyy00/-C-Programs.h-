#include <stdio.h>
int main()

{
     float eng,hin,ma,sci,comp;
     float agg_m,percent;


     printf("Enter Your Marks in English:");
     scanf("%f", &eng);

     printf("Enter Your Marks in Hindi:");
     scanf("%f", &hin);

     printf("Enter Your Marks in Maths:");
     scanf("%f", &ma);

     printf("Enter Your Marks in Science:");
     scanf("%f", &sci);

     printf("Enter Your Marks in Computer:");
     scanf("%f", &comp);
    
     agg_m = eng + hin + ma + sci +comp;
    percent = agg_m/5;

    printf("Aggregate Marks=%f\n", agg_m);
    printf("Percentage=%f ", percent);
    
    
    return 0;
}