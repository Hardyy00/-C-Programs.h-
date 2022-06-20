#include <stdio.h>
int main()
{
   int A0_a, A0_b,A1_a, A1_b, A2_a, A2_b, A3_a, A3_b ,A4_a, A4_b;
   int  A5_a, A5_b, A6_a, A6_b, A7_a, A7_b, A8_a, A8_b;

   printf("\nEnter length of paper in mm: ");
   scanf("%d", &A0_a);

    printf("\nEnter breadth of paper in mm: ");
   scanf("%d", &A0_b);

   A1_a=A0_b, A1_b=A0_a/2;
   A2_a=A1_b, A2_b=A1_a/2;
   A3_a=A2_b, A3_b=A2_a/2;
   A4_a=A3_b, A4_b=A3_a/2;
   A5_a=A4_b, A5_b=A4_a/2;
   A6_a=A5_b, A6_b=A5_a/2;
   A7_a=A6_b, A7_b=A6_a/2;
   A8_a=A7_b, A8_b=A7_a/2;
    
    printf("Dimensions of A0= %d mm x %d mm\n", A0_a, A0_b);
    printf("Dimensions of A1= %d mm x %d mm\n", A1_a, A1_b);
    printf("Dimensions of A2= %d mm x %d mm\n", A2_a, A2_b);
    printf("Dimensions of A3= %d mm x %d mm\n", A3_a, A3_b);
    printf("Dimensions of A4= %d mm x %d mm\n", A4_a, A4_b);
    printf("Dimensions of A5= %d mm x %d mm\n", A5_a, A5_b);
    printf("Dimensions of A6= %d mm x %d mm\n", A6_a, A6_b);
    printf("Dimensions of A7= %d mm x %d mm\n", A7_a, A7_b);
    printf("Dimensions of A8= %d mm x %d mm\n", A8_a, A8_b);

    return 0;
}