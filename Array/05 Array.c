#include<stdio.h>
#include<conio.h>

int main()
{
    int Values[5] =  {21,-18};


    printf("\n Value Of 1st Element = %d",Values[0]);
    printf("\n Value Of 2nd Element = %d",Values[1]);
    printf("\n Value Of 3rd Element = %d",Values[2]);
    printf("\n Value Of 4th Element = %d",Values[3]);
    printf("\n Value Of 5th Element = %d",Values[4]);

    getch();

    Values[4] = 50;
    Values[2] = 101;
    Values[0] = 7;


    printf("\n \n New Values => \n\n");

    printf("\n Value Of 1st Element = %d",Values[0]);
    printf("\n Value Of 2nd Element = %d",Values[1]);
    printf("\n Value Of 3rd Element = %d",Values[2]);
    printf("\n Value Of 4th Element = %d",Values[3]);
    printf("\n Value Of 5th Element = %d",Values[4]);


    getch();
    return 0;
}