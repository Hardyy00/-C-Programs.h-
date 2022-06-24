#include <stdio.h>
int main()
{
    int class,num;

    printf("\nEnter the class obtained by a student : ");
    scanf("%d", &class);

    printf("\nEnter the number of subjects the student failed in : ");
    scanf("%d", &num);

    switch(class)
    {
       case 1:
       {
          if(num>3)
                   printf("\nThe Student does not got any grace marks");
          else
              printf("\nThe Student obtained  grace marks of 5 per subject"); 
           break;
       }
        
        case 2:
        {
            if(num>2)
                     printf("\nThe Student does not got any grace marks");
             else
                 printf("\nThe Student obtained grace marks of 4 per subject");
           break;
        }

        case 3:
        {
            if(num>1)
                     printf("\nThe Student does not got any grace marks");
             else
                 printf("\nThe Student obtained grace marks of 5 per subject");
           break;
        }
               
    }
        if(class<1 || class>3)
                           printf("\nYou entered wrong class");
               
    return 0;
}