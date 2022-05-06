#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Size 3

int main()
{
    int i = 0, Bill[Size] = {0}, Total_Bill = 0;

    for(i = 0 ; i < Size ; i++ )
    {
        printf("\n Enter Bill No %d = ", (i+1));
        scanf("%d",&Bill[i]);

        Total_Bill = Total_Bill + Bill[i];
    }

    getch();

    printf("\n\n Elements in Array are => \n\n");

    for(i = 0 ; i < Size ; i++)
    {
        printf("\n Amount in Bill NO %d = %d", (i+1001),Bill[i]);

    }

    printf("\n\n ********************************************* \n\n");

    printf("\n\n Total Of All Bills = %d", Total_Bill);

    getch();
    return 0;
}
