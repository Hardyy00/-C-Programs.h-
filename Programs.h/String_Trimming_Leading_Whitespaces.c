#include <stdio.h>
int main()
{
    char a[100];
    int i,j,flag=0,s=0;

    printf("\nEnter a string : ");
     gets(a);

    if(a[0]==" ")
         {
              flag=1;
         }

   if(flag==0)
      printf("\nThere are no leading white spaces in the string.");
   else
       {
           for(i=0;a[i]==' ';i++)
              s++;
            
        for(i=1;i<=s;i++) 
           for(j=0;a[j]!='\0';j++)
              a[j]=a[j+1];

            printf("\nString after trimming the leading white spaces : %s",a);
             
       }
    
                return 0;
}