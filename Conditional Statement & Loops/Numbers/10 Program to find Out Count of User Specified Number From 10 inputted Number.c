///Program to find Out Count of Even Number  Entered By User From 10 inputted Number

#include<stdio.h>
#include<conio.h>

int main()
{
    int i =0,   ECnt = 0,  Num = 0;

    printf("\n Enter 10 Number To Find EVEN Numbers Count =>\n");

    for(i = 1; i <= 10; i++)
    {
        printf("\n Enter Number %d = ", i);
        scanf("%d",&Num);


        if(Num % 2 == 0)
        {
            ECnt++;
        }
    }

    printf("\n Count of EVEN Numbers Entered is = %d.", ECnt);

    getch();
    return 0;
}
