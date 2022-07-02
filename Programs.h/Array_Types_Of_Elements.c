#include <stdio.h>
int main()
{
    int i,n,a[100],p=0,ne=0,z=0;
    printf("\nEnter the size of the array : ");
    scanf("%d",&n);

    printf("\nEnter the elements :\n");
       for(i=0;i<n;i++)
         {
             scanf("%d",&a[i]);
             
             if(a[i]>0)
                   p++;
              else if(a[i]<0)
                   ne++;
              else 
                 z++;
         }
      
      printf("\nNumber of Positive number = %d\nNumber of negetive numbers = %d",p,ne);
      printf("\nNumber of zeros = %d",z);

      return 0;
    

}