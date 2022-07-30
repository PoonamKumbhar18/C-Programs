#include<stdio.h>
#include<conio.h>

int Cube(int);

int main()
{
    int Num=0, i=0,Res =0;

    printf("\n Enter 10 Number  To find Sum of Number =>\n ");



    Res=Cube(Num);

    printf("\n\n Square Of Given Number =>%d", Res);


    getch();
    return 0;
}


int Cube(int No)
{
    int i = 0, Cub = 0;

    for(i = 1; i<=10; i++)
    {
        printf("\n Enter Number %d = ", i);
        scanf("%d",&No);

        Cub = Cub+No;
    }


   return Cub;
}
