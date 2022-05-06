#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Size 10

int main()
{
    int i = 0, Bill[Size] = {0}, ECnt = 0;

    for(i = 0 ; i < Size ; i++ )
    {
        printf("\n Enter Bill No %d = ", (i+1));
        scanf("%d",&Bill[i]);


        if(Bill[i]% 2 == 0)
        {
            ECnt++;
        }

    }

    getch();

    printf("\n Bills Generated Today => \n");


    for(i = 0 ; i < Size ; i++)
    {
        printf("\n Amount in Bill NO %d = %d", (i+1001),Bill[i]);

    }

    printf("\n\n ************************************************** \n");

    printf("\n Even Amount Received Today = %d", ECnt);


    getch();
    return 0;
}
