#include<stdio.h>
#include<conio.h>

int Cube(int);

int main()
{
    int Num = 0, Res =0;

    printf("\n Enter an Integer Number = ");
    scanf("%d",&Num);



    Res=Cube(Num);

    printf("\n\n Square Of Given Number =>\t (%d)^3 = %d.", Num, Res);


    getch();
    return 0;
}


int Cube(int No)
{
   int Cub = 0;
   Cub = No * No * No;

   return Cub;
}
