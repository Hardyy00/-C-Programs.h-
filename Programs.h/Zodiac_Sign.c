#include <stdio.h>
int main()
{
    int dob,m;
    printf("\nEnter the Date of birth : ");
    scanf("%d", &dob);
    printf("\nEnter the Month of birth : ");
    scanf("%d", &m);

    if((dob>=22 && m==12) || (dob<=19 && m==1))
          printf("\nZodiac sign : Capricon");
    else if((dob>=20 && m==1) || (dob<=17 && m==2))
          printf("\nZodiac sign : Aquarius");
    else if((dob>=18 && m==2) || (dob<=19 && m==3))
          printf("\nZodiac sign : Pisces");
    else if((dob>=20 && m==3) || (dob<=19 && m==4))
          printf("\nZodiac sign : Aries");
    else if((dob>=20 && m==4) || (dob<=20 && m==5))
          printf("\nZodiac sign : Taurus");
    else if((dob>=21 && m==5) || (dob<=20 && m==6))
          printf("\nZodiac sign : Gemini");
    else if((dob>=21 && m==6) || (dob<=22 && m==7))
          printf("\nZodiac sign : Cancer");
    else if((dob>=23 && m==7) || (dob<=22 && m==8))
          printf("\nZodiac sign : Leo");
    else if((dob>=23 && m==8) || (dob<=22 && m==9))
          printf("\nZodiac sign : Virgo");
    else if((dob>=23 && m==9) || (dob<=22 && m==10))
          printf("\nZodiac sign : Libra");
    else if((dob>=23 && m==10) || (dob<=21 && m==11))
          printf("\nZodiac sign : Scorpio");
    else if((dob>=22 && m==11) || (dob<=21 && m==12))
          printf("\nZodiac sign : Sagittarius");
    
    return 0;
}