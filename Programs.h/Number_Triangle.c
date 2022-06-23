#include <stdio.h>
int main()
{
    int i=1,row,total_row=4,space,symbol;

    for(row=1;row<=4;row++)
    {
       for(space=1;space<=total_row-row;space++)
           printf(" ");
       
       for(symbol=1;symbol<=row;symbol++)
           printf(" %d", i++);

        printf("\n");

    }
    return 0 ; 
}