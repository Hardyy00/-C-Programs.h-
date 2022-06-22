#include <stdio.h>
int main()
{
    int r,s,a;
    printf("\nEnter the age of Ram: ");
    scanf("%d", &r);
    printf("\nEnter the age of Shyam: ");
    scanf("%d", &s);
    printf("\nEnter the age of Ajay: ");
    scanf("%d", &a);

    if(r<s)
          {
           if(r<a)
           printf("\nRam is Youngest\n");
          }
    else
        {
         if(s<a)
                printf("\nShyam is Youngest\n");
        }
      if(a<s)
            printf("\nAjay is Youngest \n");
    
    return 0;
}