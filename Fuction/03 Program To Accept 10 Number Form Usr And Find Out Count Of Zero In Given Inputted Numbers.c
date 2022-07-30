#include<stdio.h>
#include<conio.h>
int Zerocount_Number(int);

int main()
{
    int Num1 =0, i=0, Res =0;

    printf("\n Enter 10 Number  To find Count of Zero Number =>\n ");

    printf("\n********************************************\n");

    Res=Zerocount_Number(Num1);

    printf("\n********************************************\n");

    printf("\n Count Of Zero is  = %d.",Res);

    printf("\n\n********************************************\n");


    getch();
    return 0;


}

int Zerocount_Number(int No1 )
{

    int Zcnt=0, i=0;

    for(i=1; i<=10; i++)
    {

        printf("\n Enter Number %d = ", i);
        scanf("%d",&No1);

    if(No1 == 0)
    {


        Zcnt++;
    }
    }

    return Zcnt ;
}
