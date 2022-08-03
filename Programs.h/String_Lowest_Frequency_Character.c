#include <stdio.h>
int main()
{
    char a[100];
    int i,b[200]={0},max,f,p;

    printf("\nEnter a string : ");
     gets(a);

    max=a[0];
    for(i=0;a[i]!='\0';i++)
       if(max<a[i])
           max=a[i];

    max++;
    
    for(i=0;a[i]!='\0';i++)
      b[a[i]]++;

    f=b[a[0]];
    p=a[0];
    for(i=0;i<max;i++)
      if(f>b[i] && b[i]>0)
           {
               f=b[i];
               p=i;
           }

    printf("\nLowest Frequency character is '%c' with the frequency of %d",p,f);

    return 0;
}