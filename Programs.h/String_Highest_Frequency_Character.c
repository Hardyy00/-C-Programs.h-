#include <stdio.h>
int main()
{
    char a[100];

    int i,max,b[200]={0},f,ch;

    printf("\nEnter a string : ");
      gets(a);
   
    max=a[0];

   for(i=0;a[i]!=0;i++)
       if(max<a[i])
          max=a[i];

        max++;

    for(i=0;a[i]!=0;i++)
      b[a[i]]++;

    f=b[0];
    for(i=0;i<max;i++)
        if(f<b[i])
           {
               f=b[i];
               ch=i;
           }

    printf("\nHighest frequency character is '%c' with frequency of %d",ch,f);

     return 0;
}