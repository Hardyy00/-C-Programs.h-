#include <stdio.h>
void leapyear(int);
int main()
{
  int yr;
  printf("\nEnter any year : ");
  scanf("%d",&yr);

  leapyear(yr);

  return 0;
}

void leapyear(int yr)
{
   if((yr%4==0 && yr%100!=0) || (yr%4==0 && yr%100==0 && yr%400==0))
             printf("\nIts a leap year");
   else
      printf("\nIts not a leap year");
}
