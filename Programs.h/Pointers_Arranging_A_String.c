#include <stdio.h>
int main()
{
    char a[100],*p=a,swap;
    int i,j,d=0;

    printf("\nEnter a string : ");
       gets(a);

    for(i=0;*(p+i)!='\0';i++)
        d++;

    for(i=0;i<d-2;i++)
       for(j=0;j<d-2-i;j++)
         if(*(p+j)>*(p+j+1))
            {
                swap=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=swap;
            }

    printf("\nAfter arranging ,the string is : %s",a);

    return 0;
}