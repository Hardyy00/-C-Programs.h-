#include <stdio.h>
int main()
{
    int i,p,noext;
    char a[100],b[100],*str,*str2;
    
    printf("\nEnter the string : ");
     gets(a);

    str2=a;
    str=b;
    printf("\nEnter the position from which you want to extract characters : ");
     scanf("%d",&p);
    printf("\nEnter the number of characters you want to extract : ");
     scanf("%d",&noext);

     if(noext>0)
        {
            for(i=0;i<noext;i++)
               *(str+i)=*(str2+(p-1)+i);

               *(str+i)='\0';

            printf("\n%s",b);
        }
    else
        printf("\n%s",&a[p-1]);

        return 0;
}