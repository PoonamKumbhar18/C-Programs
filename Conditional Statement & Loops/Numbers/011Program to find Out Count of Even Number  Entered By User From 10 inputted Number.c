///Program to find Out Count of ODD Number  Entered By User From 10 inputted Number

#include<stdio.h>
#include<conio.h>

int main()
{
    int i =0,   OCnt = 0,  Num = 0;

    printf("\n Enter 10 Number To Find ODD Numbers Count =>\n");

    for(i = 1; i <= 10; i++)
    {
        printf("\n Enter Number %d = ", i);
        scanf("%d",&Num);


        if(Num % 2 == 1)
        {
            OCnt++;
        }
    }

    printf("\n Count of ODD Numbers Entered is = %d.", OCnt);

    getch();
    return 0;
}
