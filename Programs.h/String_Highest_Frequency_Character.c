#include <stdio.h>
int main()
{
    char a[100];
    int i,max,b[500]={0},f,p;

    printf("\nEnter a string : ");
     gets(a);

    max=a[0];

    for(i=0;a[i]!='\0';i++)
      if(max<a[i])
         max=a[i];

    max++;

    for(i=0;a[i]!=0;i++)
        b[a[i]]++;
    
    
    f=b[0];
    p=0;
    
    for(i=0;i<max;i++)
       if(f<b[i])
       {
          f=b[i];
          p=i;
       }

    printf("\nThe highest frequency charater is '%c' with the frequency of %d",p,f);

    return 0;
         
}