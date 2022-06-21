#include <stdio.h>
int main()
{ 
    int amount,nof1,nof2,nof5,nof10,nof50,nof100;
    int sn;

    printf("\nEnter the sum of denominitions: \n");
    scanf("%d", &amount);

    nof100=amount/100;
    amount=amount%100;
    nof50=amount/50;
    amount=amount%50;
    nof10=amount/10;
    amount=amount%10;
    nof5=amount/5;
    amount=amount%5;
    nof2=amount/2;
    amount=amount%2;
    nof1=amount/1;
    amount=amount%1;

    sn=nof100+nof50+nof10+nof5+nof2+nof1;

    printf("\nSmallest number of notes = %d\n", sn);


    return 0;
}