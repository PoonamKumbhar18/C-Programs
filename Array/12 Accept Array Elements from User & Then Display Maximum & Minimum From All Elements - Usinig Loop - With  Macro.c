#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Size 10

int main()
{
    int i = 0, Bill[Size] = {0}, Max = 0, Min = 0;

    for(i = 0 ; i < Size ; i++ )
    {
        printf("\n Enter Bill No %d = ", (i+1));
        scanf("%d",&Bill[i]);


       if( Bill[i] >  Max)
        {
            Max = Bill[i];
        }

         if(i == 1 || Bill[i] <  Min )
        {
            Min = Bill[i];
        }
    }


    getch();

    printf("\n Bills Generated Today => \n");


    for(i = 0 ; i < Size ; i++)
    {
        printf("\n Amount in Bill NO %d = %d", (i+1001),Bill[i]);

    }

    printf("\n\n ************************************************** \n");

    printf("\n Maximum Amount Received Today = %d", Max);

    printf("\n\n ************************************************** \n");

    printf("\n Minimum Amount Received Today = %d", Min);


    printf("\n\n ************************************************** \n");

    getch();
    return 0;
}
