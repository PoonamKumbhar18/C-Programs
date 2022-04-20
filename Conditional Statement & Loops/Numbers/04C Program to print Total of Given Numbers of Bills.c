///Program to print Total of Given Numbers of Bills

#include<stdio.h>
#include<conio.h>


int main()
{
    int i =0, Cnt = 0, Amout = 0, Bill_Sum = 0;

    printf("\n Enter How Many Bills Do You Have = ");
    scanf("%d",&Cnt);

    for(i = 1; i<=Cnt; i++)
    {
        printf("\n Enter  Bill Number %d = ", i);
        scanf("%d",&Amout);

        Bill_Sum = Bill_Sum + Amout;
    }

    printf("\n Addition of Given Numbers = %d", Bill_Sum);

    getch();
    return 0;

}
