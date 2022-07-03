#include <stdio.h>
int main()
{
    int t[100],b[100],i,sum1=0,sum2=0,n;
    printf("\nEnter the number of states : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter the votes for Trump and Biden in state %d respectively :\n",i+1);
        scanf("%d%d",&t[i],&b[i]);

        sum1=sum1+t[i];
        sum2=sum2+b[i];
    }
     
     for(i=0;i<n;i++)
      {
          if(t[i]>b[i])
              printf("\nTrump has won in state %d",i+1);
          else if(b[i]>t[i])
              printf("\nBiden has won in state %d",i+1);
           else 
              printf("\nIt is draw in state %d",i+1);
      }
      
      if(sum1>sum2)
               printf("\n\nTrump is the overall winner");
      else if(sum1<sum2)
                printf("\nBiden is the overall winner");
       else
           printf("\nThe Election ended up in a draw");

           return 0;

}