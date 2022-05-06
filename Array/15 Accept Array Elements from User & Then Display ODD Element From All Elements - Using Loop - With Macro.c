#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Size 10

int main()
{
    int i = 0, Bill[Size] = {0}, OCnt = 0;

    for(i = 0 ; i < Size ; i++ )
    {
        printf("\n Enter Bill No %d = ", (i+1));
        scanf("%d",&Bill[i]);


        if(Bill[i]% 2 == 1)
        {
            OCnt++;
        }
    }


    getch();

    printf("\n Bills Generated Today => \n");


    for(i = 0 ; i < Size ; i++)
    {
        printf("\n Amount in Bill NO %d = %d", (i+1001),Bill[i]);

    }

    printf("\n\n ************************************************** \n");


    printf("\n ODD Amount Received Today = %d", OCnt);

    getch();
    return 0;
}
