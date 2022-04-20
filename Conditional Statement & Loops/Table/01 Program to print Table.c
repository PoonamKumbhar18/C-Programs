#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 7, Cnt = 1;

    printf("\n Table for 7 is =>> \n");

    while(Cnt <= 10)
    {
        printf("\n %d", (Num * Cnt));
        Cnt++;
    }

    printf("\n\n Thanks");

    getch();
    return 0 ;
}
