#include<stdio.h>
#include<conio.h>

int main()
{
    int No =0, dcnt = 0, Temp = 0;

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
            Temp = Temp / 10;
            dcnt++;
        }

        printf("\n\n Digit in %d Number are = %d", No, dcnt);
        getch();
        return 0;

}
