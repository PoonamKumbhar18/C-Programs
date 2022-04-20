#include<stdio.h>
#include<conio.h>

int main()
{
    int No =0, Temp = 0,  dsum = 0, dcnt = 0, Dig = 0;

    Up:
        printf("\n Enter a Positive Number = ");
        scanf("%d",&No);

        if(No <= 0)
        {
            printf("\n  Do Enter positive Integral value \n ");
            goto Up;

        }

        Temp = No;
        dcnt = 0;

        while(Temp > 0)
        {
            Temp = Temp /10;
            dcnt++;
        }
        if(dcnt == 3)
        {
            Temp = No;

            while(Temp > 0)
            {
                Dig = Temp % 10;
                dsum= dsum + Dig;
                Temp = Temp / 10;

            }

        }
        else
        {
            printf("\n Its Not 3Digit Number");
            goto Up;

        }

        printf("\n\n Sum of Digits in of %d is = %d",No, dsum);
        getch();
        return 0;

}
