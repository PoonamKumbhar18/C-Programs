///Program to find Out Count of Zeros Entered by User From 10 inputted Number

#include<stdio.h>
#include<conio.h>


int main()
{
    int i =0,   ZCnt = 0, Num = 0;

    printf("\n Enter 10 Number  To find Zeros Count =>\n ");

    for(i = 1; i <= 10; i++)
    {
        printf("\n Enter Number %d = ", i);
        scanf("%d",&Num);

        /// Negative logic//
        if( Num == 0)
        {

           ZCnt++;
        }

    }

    printf("\n Count of Zeros Entered is = %d", ZCnt);
    getch();
    return 0;
}
