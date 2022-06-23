#include <stdio.h>
int main()
{
    int m=21,c,p;

    while(1)
    {
       printf("\nNumber of Matchsticks left = %d\n", m);
       printf("Pick 1 or 2 or 3 or 4 matchstick :  ");
       scanf("%d", &p);

       if(p>4 || p<1)
          continue;

       m=m-p;
        printf("\nNumber of Matchsticks left = %d\n", m);
      
       c=5-p;
       printf("\nComputer picks %d matches\n", c);

       m=m-c;
       
       if(m==1)
        {      
             printf("\nNumber of Matchsticks left = %d\n", m);
             printf("\nYou loose , dipshit");
                break;
        }
    }
    return 0;
}