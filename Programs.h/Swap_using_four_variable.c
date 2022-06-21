#include <stdio.h>
int main()
{
  int C,D,A,B;
  printf("\nEnter the value of C: \n");
  scanf("%d", &C); 
  printf("\nEnter the value of D: \n");
  scanf("%d", &D);  

  A=C;
  B=D;
  C=B;
  D=A;

  printf("\nC=%d\nD=%d", C, D);

    return 0;
}
