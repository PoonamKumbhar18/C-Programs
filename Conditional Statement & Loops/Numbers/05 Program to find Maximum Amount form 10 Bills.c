///Program to find Maximum Amount form 10 Bills.c

#include<stdio.h>
#include<conio.h>


int main()
{
    int i =0,  Amount = 0, Max_Bill = 0;


    for(i = 1; i <= 10; i++)
    {
        printf("\n Enter  Bill Number %d = ", i);
        scanf("%d",&Amount);

        ///logic//

        if(Amount >  Max_Bill)
        {
            printf("\n Max Updated\n");
            Max_Bill = Amount;
        }
    }

    printf("\n Maximum Bill Amount is = %d", Max_Bill);

    getch();
    return 0;

}
