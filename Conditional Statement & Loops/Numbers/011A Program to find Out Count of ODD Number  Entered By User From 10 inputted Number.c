///Program to Accept Bill Amount from User - Display Sum of after users enters -ve or zero

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int Sum =0,   Cnt = 1,  Num = 0;

    printf("\n Enter Bill Amounts For Addition => ");
    printf("\n Note: Enter -ve number or zero to stop input.");

    while(1)
    {
        printf("\n Enter Number %d = ", Cnt);
        scanf("%d",&Num);


        if(Num <= 0)
        {
            break;
        }

        Sum = Sum + Num;
    }

    printf("\n Addition of Given Numbers is  = %d.", Sum);

    getch();
    return 0;
}
