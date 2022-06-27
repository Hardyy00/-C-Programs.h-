#include <stdio.h>
int main()
{
       float speed,l,t;
    float *p=&speed;

    printf("\nEnter the distance travelled and time taken respectively :\n");
      scanf("%f%f",&l,&t);

      *p=(float)l/t;
      *p*=18.0/5;

      printf("\nSpeed in km/hr = %f",speed);

      return 0;
}