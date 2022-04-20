/// Program To Find out Cube

#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0, Cub = 0;

    printf("\n Enter an Integer Number = ");
    scanf("%d",&Num);

    Cub = Num * Num * Num;

    printf("\n\n Cube Of Given Number =>\n\t\t\t (%d)^3 = %d.", Num, Cub);


    getch();
    return 0;
}
