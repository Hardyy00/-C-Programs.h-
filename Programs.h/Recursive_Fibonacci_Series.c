#include <stdio.h>
int fs(int);
int main()
{
    int n,i;
    printf("\nEnter the number of terms of the series : ");
    scanf("%d",&n);

   printf("Fibonacci series upto %d terms is :\n");
    for(i=1;i<=n;i++)
      printf("%d  ",fs(i));

      return  0;
}

int fs(int i)
{
    if(i==0)
         return 0;
    else if(i==1)
         return 1;
    else 
        return (fs(i-1)+fs(i-2));
    
}