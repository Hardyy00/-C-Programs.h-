#include <stdio.h>
int main()
{
    int f,yr,k=1,m=11,d,c,yr_1;
    printf("\nEnter the Year: \n");
    scanf("%d", &yr);
     //Zeller's Rule
    yr_1=yr-1;
    d=((yr_1/10)%10)*10+yr_1%10;
    c=(yr_1/1000)*10+(yr_1/100)%10;
    f=k+((13*m-1)/5)+d+(d/4)+(c/4)-2*c;   //Zeller's Formula

    if(f%7==0)
            printf("\nIt is Sunday on 1st January,%d\n", yr);
    if(f%7==1)
            printf("\nIt is Monday on 1st January,%d\n", yr);
    if(f%7==2)
            printf("\nIt is Tuesday on 1st January,%d\n", yr);
    if(f%7==3)
            printf("\nIt is Wednesday on 1st January,%d\n", yr);
    if(f%7==4)
            printf("\nIt is Thursday on 1st January,%d\n", yr);
    if(f%7==5)
            printf("\nIt is Friday on 1st January,%d\n", yr);
    if(f%7==6)
            printf("\nIt is Saturday on 1st January,%d\n", yr);
    
    return 0;
}