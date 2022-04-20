///Program to find Out Count of Positive Numbers Entered by User From 10 inputted Number

#include<stdio.h>
#include<conio.h>


int main()
{
    int i =0,   PCnt = 0, Num = 0;

    printf("\n Enter 10 Number  To find Positive Numbers Count =>\n ");



    for(i = 1; i <= 10; i++)
    {
        printf("\n Enter Number %d = ", i);
        scanf("%d",&Num);

        /// Positiv logic//
        if( Num > 0)
        {

           PCnt++;
        }

    }

    printf("\n Count of Positive Numbers Entered is = %d", PCnt);



    getch();
    return 0;

}
