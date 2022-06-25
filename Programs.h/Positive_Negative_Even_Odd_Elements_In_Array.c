#include <stdio.h>
int main()
{
    int a[100],n,i,p=0,ne=0,e=0,o=0;
    printf("\nEnter the size of  the array : ");
    scanf("%d",&n);

    printf("\nEnter the elements :\n");
     
         for(i=0;i<n;i++)
      {
        scanf("%d",&a[i]);

         if(a[i]%2==0)
                e++;
          else
               o++;
        if(a[i]>0)
              p++;
        if(a[i]<0)
              ne++;
     }

       printf("\nNumber of  Positive  elements = %d\nNumber of Negative elements =  %d",p,ne );
       printf("\nNumber of Even elements = %d\nNumber of odd elements = %d",e,o);
    
    return 0;
}
