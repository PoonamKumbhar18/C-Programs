#include<stdio.h>
#include<conio.h>

int main()
{
    int No =0, dsum = 0, Temp = 0, Dig = 0;

    Up:
        printf("\n Enter a Positive Number = ");
        scanf("%d",&No);

        if(No <= 0)
        {
            printf("\n  Do Enter positive Integral value \n ");
            goto Up;

        }

        Temp = No;

        while(Temp > 0)
        {
            Dig = Temp % 10;
            dsum = dsum + Dig;
            Temp = Temp / 10;

        }

        printf("\n\n Digit Sum in %d Number is = %d", No, dsum);
        getch();
        return 0;

}
