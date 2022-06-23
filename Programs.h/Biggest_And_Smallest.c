#include <stdio.h>
int main()
{
    int big,small,range,limit,num;

    printf("\nEnter the limit : ");
    scanf("%d", &limit);

    printf("\nEnter %d numbers :\n", limit);
    scanf("%d", &num);

    big=small=num;

    limit=limit-1;

    while(limit>0)
    {
       scanf("%d", &num);

       if(num>big)
                 big=num;

        if(num<small)
                 small=num;
        
       limit--;

    }

       range=big-small;

       printf("\nBiggest number = %d\nSmallest number = %d", big, small);
       printf("\nRange = %d", range);

    return 0;
}