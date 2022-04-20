///Program to find Out Count of Negative Numbers Entered by User From 10 inputted Number

#include<stdio.h>
#include<conio.h>


int main()
{
    int i =0,   NCnt = 0, Num = 0;

    printf("\n Enter 10 Number  To find Negative Numbers Count =>\n ");



    for(i = 1; i <= 10; i++)
    {
        printf("\n Enter Number %d = ", i);
        scanf("%d",&Num);

        /// Negative logic//
        if( Num < 0)
        {

           NCnt++;
        }

    }

    printf("\n Count of Negative Numbers Entered is = %d", NCnt);



    getch();
    return 0;

}
