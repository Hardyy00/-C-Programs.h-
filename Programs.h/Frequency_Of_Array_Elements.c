#include <stdio.h>
int main()
{
  int n,i,max,a[100],b[100]={0},num,p=0;
  printf("\nEnter the size of the array : ");
  scanf("%d",&n);
  printf("\nEnter the number to searched : ");
  scanf("%d",&num);

  for(i=0;i<n;i++)
    scanf("%d",&a[i]);

  max=a[0];
  for(i=0;i<n;i++)
      if(max<a[i])
             max=a[i];
    
    max++;

    for(i=0;i<n;i++)
        b[a[i]]++;

    for(i=0;i<max;i++)
      {
        if(num==i && b[i]>0)
          {
            p=1;
            break;
          }
      }
    
      if(p==0)
          printf("\nNot found");
      else
        printf("\nFrequency of %d = %d",num,b[num]);
    

       return 0;
}