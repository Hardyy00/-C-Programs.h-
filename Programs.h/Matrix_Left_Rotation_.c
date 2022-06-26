#include <stdio.h>
void rotate(int *,int,int);
int main()
{
    int r,c,i,j,a[100][100],p;
    printf("\nEnter the order of the matrix :\n");
     scanf("%d%d",&r,&c);

     printf("\nEnter the elements :\n");
      for(i=0;i<r;i++)
         for(j=0;j<c;j++)
            {
              printf("\nEnter the element a[%d][%d] : ",i,j);
               scanf("%d",&a[i][j]);
            }
    printf("\nEnter the number of position by which you want left shift the elements : ");
     scanf("%d",&p);

     for(i=0;i<r;i++)
       rotate(&a[i],p,c);
        
     printf("\nElements are :\n");
        for(i=0;i<r;i++)
           {
               for(j=0;j<c;j++)
                 printf("%d ",a[i][j]);

                 printf("\n");
           }

        return 0;
}

void rotate(int *a,int p,int c)
{
    int i,j,swap;
    for(i=0;i<p;i++)
    {
       swap=*a;
        for(j=0;j<c-1;j++)
           *(a+j)=*(a+(j+1));

        *(a+c-1)=swap;
    }
}