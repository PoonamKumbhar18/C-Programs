///01 Program to print Table of -7 ///
#include<stdio.h>
#include<conio.h>

int main()
{

    int Num = 0, Cnt = 1;


    Printf("\n Enter a Number To Get Its Table = ");
    scanf("%d", &Num);


    printf("\n Table For %d is => \n", Num);

    while(Cnt <= 10)
    {
        printf("\n %d", (Num * Cnt));
        Cnt++;
    }

    printf("\n\n Thanks");

    getch();
    return 0;


}

