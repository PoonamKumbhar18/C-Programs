///Program to find Maximum Amount  and Minimum form 10 Bills.c

#include<stdio.h>
#include<conio.h>


int main()
{
    int i =0,   Cnt = 0, Amount = 0, Min_Bill = 0, Max_Bill = 0;

    printf("\n Enter How Many Bills Do You Have = ");
    scanf("%d",&Cnt);


    for(i = 1; i <= Cnt; i++)
    {
        printf("\n Enter  Bill Number %d = ", i);
        scanf("%d",&Amount);

        /// min logic//
        if((i == 1) || (Amount <  Min_Bill))
        {

            printf("\n Min Updated\n");
            Min_Bill = Amount;
        }


        /// max logic
        if((i == 1) || (Amount >  Max_Bill))
        {

            printf("\n Max Updated\n");
            Max_Bill = Amount;
        }
    }
    printf("\n\n ************************************ \n");

    printf("\n Maximum Bill Amount is = %d", Max_Bill);
    printf("\n Minimum Bill Amount is = %d", Min_Bill);

    printf("\n\n ************************************ \n");

    getch();
    return 0;

}
