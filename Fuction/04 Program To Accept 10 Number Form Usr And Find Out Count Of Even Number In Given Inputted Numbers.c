#include<stdio.h>
#include<conio.h>
int Even_Number(int);

int main()
{
    int Num1 =0, i=0, Res =0;

    printf("\n Enter 10 Number  To find Count of Even Number =>\n ");

    printf("\n********************************************\n");

    Res=Even_Number(Num1);

    printf("\n********************************************\n");

    printf("\n Count Of Even Number is  = %d",Res);

    printf("\n\n********************************************\n");


    getch();
    return 0;


}

int Even_Number(int No1 )
{

    int Ecnt=0, i=0;

    for(i=1; i<=10; i++)
    {

        printf("\n Enter Number %d = ", i);
        scanf("%d",&No1);

    if(No1%2 == 0)
    {


        Ecnt++;
    }
    }

    return Ecnt ;
}
