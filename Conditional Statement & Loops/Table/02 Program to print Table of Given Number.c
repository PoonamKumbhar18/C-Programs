/// Program to print Table of Given Number

#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0, Cnt = 1;

    printf("\n Enter a Number To Get Its Table = ");
    scanf("%d",&Num);

    printf("\n Table for %d is =>> \n");

    while(Cnt <= 10)
    {
        printf("\n %d", (Num * Cnt));
        Cnt++;
    }

    printf("\n\n Thanks");

    getch();
    return 0 ;
}
