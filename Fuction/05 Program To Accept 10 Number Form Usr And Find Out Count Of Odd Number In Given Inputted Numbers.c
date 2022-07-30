#include<stdio.h>
#include<conio.h>
int Odd_Number(int);

int main()
{
    int Num1 =0, i=0, Res =0;

    printf("\n Enter 10 Number  To find Count of Odd Number =>\n ");

    printf("\n********************************************\n");

    Res=Odd_Number(Num1);

    printf("\n********************************************\n");

    printf("\n Count Of Odd Number is  = %d",Res);

    printf("\n\n********************************************\n");


    getch();
    return 0;


}

int Odd_Number(int No1 )
{

    int Ocnt=0, i=0;

    for(i=1; i<=10; i++)
    {

        printf("\n Enter Number %d = ", i);
        scanf("%d",&No1);

    if(No1%2 == 1)
    {


        Ocnt++;
    }
    }

    return Ocnt ;
}
