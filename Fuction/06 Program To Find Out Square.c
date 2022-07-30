#include<stdio.h>
#include<conio.h>

int Square(int);

int main()
{
    int Num = 0, Res =0;

    printf("\n Enter an Integer Number = ");
    scanf("%d",&Num);



    Res=Square(Num);

    printf("\n\n Square Of Given Number =>\t (%d)^2 = %d.", Num, Res);


    getch();
    return 0;
}


int Square(int No)
{
   int Sqr = 0;
   Sqr = No * No;

   return Sqr;
}
