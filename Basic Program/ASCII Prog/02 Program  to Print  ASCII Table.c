#include<stdio.h>
#include<conio.h>

int main()
{

    int Val = 0;

    printf("\n ASCII TABLE => \n\n");

    for(Val = 0; Val < 128; Val++)
    {
       printf("\n %d = %c", Val, Val);
    }

    printf("\n\n Thanks");

    getch();
    return 0 ;
}
