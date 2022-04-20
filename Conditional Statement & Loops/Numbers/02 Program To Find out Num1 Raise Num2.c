/// Program To Find out Num1 Raise Num2 - Power 1 or 0

#include<stdio.h>
#include<conio.h>

int main()
{
    int Base = 0, Exp = 0, Pow = 0 , Temp = 0;

    printf("\n Enter Base = ");
    scanf("%d",&Base);

    printf("\n Enter Exponent = ");
    scanf("%d",&Exp);

    if(Base == 0 || Base == 1)
      {
          Pow = Base;
      }
      else
      {
            for(Pow = 1, Temp = Exp; Temp > 0; Temp--)
            {
                printf("\n Pow = %d * %d = %d", Pow, Base, (Pow*Base));
                Pow = Pow * Base;
            }
      }



    printf("\n Power (%d)^(%d) = %d.", Base, Exp, Pow);

    getch();
    return 0;
}

