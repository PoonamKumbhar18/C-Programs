#include<stdio.h>
#include<conio.h>
void Negative_Number(int);

int main()
{
    int Num1 =0, i=0;


    for(i=1; i<=10; i++)
    {

        printf("\n Enter Number %d =", i);
        scanf("%d",&Num1);



    }
    Negative_Number(Num1);

    getch();
    return 0;


}

void Negative_Number(int No1 )
{
    printf("\n********************************************\n");

        int No=0;

      if(No1<0)
    {
        printf("\n Negative Number Updated \n");
        No++;
    }

    printf("\n Count Of Negative Number is %d = ",No);

    return ;


}
