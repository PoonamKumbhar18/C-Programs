/// Program To Find out Square

#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0, Sqr = 0;

    printf("\n Enter an Integer Number = ");
    scanf("%d",&Num);

    Sqr = Num * Num;

    printf("\n\n Square Of Given Number =>\n\t\t\t (%d)^2 = %d.", Num, Sqr);


    getch();
    return 0;
}
