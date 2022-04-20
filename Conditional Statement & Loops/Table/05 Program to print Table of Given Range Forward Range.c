/// Program to print Table of Given Number in Forward Range

#include<stdio.h>
#include<conio.h>

int main()
{
    int  R = 0 , C = 0, SNum = 15, ENum = 20;


    printf("\n Enter a Starting Number = ");
    scanf("%d",&SNum);

    printf("\n Enter a Ending Number = ");
    scanf("%d",&ENum);


    printf("\n Table as => \n\n");

    if(SNum < ENum )
    {
        for(R = 1; R <= 10; R++) //Row
        {


            for(C = SNum; C <= ENum; C++) //Column
            {
                printf(" %3d ", (R * C) );

            }
            printf("\n");

        }
    }
    else
    {
        for(R = 1; R <= 10; R++) //Row
        {


            for(C = SNum; C >= ENum; C--) //Column
            {
                printf(" %3d ", (R * C) );

            }
            printf("\n");

        }
    }




    printf("\n\n Thanks");

    getch();
    return 0 ;
}
