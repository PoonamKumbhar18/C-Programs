/// Program to print Table of Given Number in Reverse Order

#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0, Cnt = 0;

    printf("\n Enter a Number To print Its Table in Reverse : ");
    scanf("%d",&Num);


    for(Cnt = 10; Cnt >= 1; Cnt--)
    {
        printf("\n %d", (Num * Cnt) );

    }

    printf("\n\n Thanks");

    getch();
    return 0 ;
}
