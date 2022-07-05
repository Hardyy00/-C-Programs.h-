#include <stdio.h>
int main()
{
    int a[100],b[100],n,i;

    printf("\nEnter the number of students : ");
     scanf("%d",&n);

     printf("\nEter the marks of students of Class A :\n");
       for(i=0;i<n;i++)
         {
             printf("\nEnter the marks of roll no. %d : ",i+1);
              scanf("%d",&a[i]);

             b[i]=a[i];
         }

        printf("\nMarks of students of Class B :\n");
          for(i=0;i<n;i++)
            {
                printf("\nMarks of roll no. %d = %d",i+1,b[i]);
            }

            return 0;
}