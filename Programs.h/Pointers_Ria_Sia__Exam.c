#include <stdio.h>
int main()
{
    int a[5],b[5],*p=a,*q=b,i;
    int sum1=0,sum2=0;

    printf("\nEnter the marks of Ria in 5 subjects :\n");
      for(i=0;i<5;i++)
       {
         scanf("%d",p+i);
          sum1+=*(p+i);
       }

    printf("\nEnter the marks of Sia in 5 subjects :\n");
      for(i=0;i<5;i++)
         {
             scanf("%d",q+i);
             sum2+=*(q+i);
         }

    for(i=0;i<5;i++)
      {
          if(*(p+i)>*(q+i))
             printf("\nRia scored more marks in subject %d",i+1);
          else if(*(q+i)>*(p+i))
              printf("\nSia scored more marks in subject %d",i+1);
           else
              printf("\nRia and Sia both scored equal marks in subject %d",i+1);
      }

      if(sum1>sum2)
         printf("\n\nOn average Ria scored more marks");
       else if(sum2>sum1)
          printf("\n\nOn average Sia scored more marks");
        else 
          printf("\n\nOn average both scored equal marks");

          return 0;
        
}