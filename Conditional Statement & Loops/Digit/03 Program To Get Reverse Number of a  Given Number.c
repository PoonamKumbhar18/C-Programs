#include<stdio.h>
#include<conio.h>

int main()
{
    int No =0, Temp = 0,  Dig = 0, Rev = 0;

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
            Rev = (Rev * 10) + Dig;
            Temp = Temp / 10;

        }

        printf("\n\n Reverse of  %d  is = %d", No, Rev);
        getch();
        return 0;

}
