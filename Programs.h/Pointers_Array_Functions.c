#include <stdio.h>
int main()
{ 
   int a[100],n,i,count=0,po,num;
   int *p=a;

   printf("\nEnter the size of the array : ");
     scanf("%d",&n);
     printf("\nEnter the elements :\n");
       for(i=0;i<n;i++)
         scanf("%d",&a[i]);

     printf("\nMenu :\n");
     printf("1. Count even numbers\n");
     printf("2. Print all odd numbers\n");
     printf("3. Search an element\n");
     printf("4. Delete a number\n");

     printf("\nEnter the serial number of the function you chosen : ");
       scanf("%d",&num);

    switch(num)
    {
        case 1:
            
             for(i=0;i<n;i++)
                if(*(p+i)%2==0)
                    count++;
        printf("\nNumber of even elements = %d",count);
          break;

        case 2:
              for(i=0;i<n;i++)
                  if(*(p+i)%2!=0)
                      printf("\n%d",*(p+i));
        
          break;

          case 3:
           {
               int a,flag=0;
               
               printf("\nEnter the number you want to search : ");
                 scanf("%d",&a);

                for(i=0;i<n;i++)
                   if(*(p+i)==a)
                      {
                        flag=1;
                        po=i;
                        break;
                      }
                if(flag==0)
                   printf("\nThe element doesn't exist in the array");
                else
                    printf("\nThe element '%d' is at postion %d(with respect to array)",a,po);
                
                break;
           }

           case 4 :
                {
                   int a,flag=0;
                   printf("\nEnter the element you want to delete : ");
                    scanf("%d",&a);

                    for(i=0;i<n;i++)
                      if(*(p+i)==a)
                         {
                                 flag=1;
                                 po=i;
                                 break;
                         }       

                        for(i=po;i<n;i++)
                             *(p+i)=*(p+i+1);

                        n--;
                       if(flag==0)
                          printf("\nElement doesn't exist");
                        else
                          {
                              printf("\nElements after deletion :\n");
                            for(i=0;i<n;i++)
                             printf("%d\n",*(p+i));
                          }
                        break;
                }     
         }

         return 0;

}