

#include<stdio.h>
#include<conio.h>



int main()
{
    int i =0, No = 0, Sum = 0;

    for(i = 1; i<=10; i++)
    {
        printf("\n Enter Number %d = ", i);
        scanf("%d",&No);

        Sum = Sum + No;
    }

    printf("\n Addition of Given Numbers = %d", Sum);

    getch();
    return 0;

}
