#include <stdio.h>
void swap( int,int );
int main()
{
    int a,b;
    printf("\nEnter the values of a and b respectively :\n");
     scanf("%d%d",&a,&b);
  
    swap(a,b);

    return 0;
}

void swap(int a,int b)
{
   a=a^b;
   b=a^b;
   a=a^b;
   
   printf("\nAfter swapping :\n");
   printf("\na= %d\nb= %d",a,b);

}