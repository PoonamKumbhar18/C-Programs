#include<stdio.h>
#include<conio.h>

int main()
{
    int Values[5] = {0};

    printf("Enter Element No 1 = ");
    scanf("%d",&Values[0]);

    printf("Enter Element No 2 = ");
    scanf("%d",&Values[1]);

    printf("Enter Element No 3 = ");
    scanf("%d",&Values[2]);

    printf("Enter Element No 4 = ");
    scanf("%d",&Values[3]);

    printf("Enter Element No 5 = ");
    scanf("%d",&Values[4]);


    printf("\n PRESS KEY TO MOVE AHEAD.");
    getch();


    printf("\n\n Element  in Array are => \n\n");

    printf("\n Value Of 101 Element = %d",Values[0]);
    printf("\n Value Of 101 Element = %d",Values[1]);
    printf("\n Value Of 101 Element = %d",Values[2]);
    printf("\n Value Of 101 Element = %d",Values[3]);
    printf("\n Value Of 101 Element = %d",Values[4]);

    getch();
    return 0;

}
